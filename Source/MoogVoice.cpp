/*
  ==============================================================================

    SynthVoice.cpp
    Created: 9 Jul 2021 6:48:18pm
    Author:  david

  ==============================================================================
*/

#include "MoogVoice.h"

MoogVoice::MoogVoice()
{
    moogLpFilter.setCutoffFrequency(DEFAULT_CUTOFF_RATE);
    moogLpFilter.setResonance(DEFAULT_RESONANCE);
    gain.setCurrentAndTargetValue(DEFAULT_GAIN * gainEnabler);
    parameterChanged(NAME_RELEASE_ENABLER, DEFAULT_RELEASE_ENABLER);
}

bool MoogVoice::canPlaySound(SynthesiserSound* sound) { return dynamic_cast<SynthesiserSound*> (sound) != nullptr; }

void MoogVoice::startNote(int midiNoteNumber, float velocity, SynthesiserSound* sound, int currentPitchWheelPosition)
{
    currentVelocity = Decibels::decibelsToGain(velocity * VELOCITY_DYN_RANGE - VELOCITY_DYN_RANGE);
    noteNumber.setTargetValue(midiNoteNumber);
    // mixer.setVelocity(currentVelocity);
    adsrLoudness.noteOn();
    adsrFilter.noteOn();
    updateVCAGain();
}

void MoogVoice::stopNote(float velocity, bool allowTailOff)
{
    adsrLoudness.noteOff();
    adsrFilter.noteOff();
}

void MoogVoice::pitchWheelMoved(int newPitchWheelValue) {
    pitchWheel = jmap(double(newPitchWheelValue), 0.0, 16383.0, -12.0, +12.0 );
}

void MoogVoice::controllerMoved(int controllerNumber, int newControllerValue) {
    if (controllerNumber == 1)  modWheel = double(newControllerValue) / (127.0 * 24.0); // Since total mod range is +/- 24, let's scale this to have +/- 1 st of wheel modulation
}

void MoogVoice::prepareToPlay(double sr, int samplesPerBlock, int outputChannels)
{
    sampleRate = sr;
    numOutputChannels = outputChannels;
    noteNumber.reset(sr, DEFAULT_GLIDE_RATE);   
    gain.reset(sr, DEFAULT_GLIDE_RATE);
    bufferOsc1.setSize(outputChannels, samplesPerBlock);
    bufferOsc2.setSize(outputChannels, samplesPerBlock);
    bufferOsc3.setSize(outputChannels, samplesPerBlock);
    bufferNoise.setSize(outputChannels, samplesPerBlock);
    fmBufferOsc1.setSize(outputChannels, samplesPerBlock);
    fmBufferOsc2.setSize(outputChannels, samplesPerBlock);
    fmBufferOsc3.setSize(outputChannels, samplesPerBlock);
    fmBufferOsc3Lfo.setSize(outputChannels, samplesPerBlock);
    fmBufferFilter.setSize(outputChannels, samplesPerBlock);
    osc1.prepareToPlay(sr);
    osc2.prepareToPlay(sr);
    osc3.prepareToPlay(sr);
    lfo.prepareToPlay(sr);
    noise.prepareToPlay(sr);
    mixer.prepareToPlay(sr);   
    moogLpFilter.prepareToPlay(sr, outputChannels);
    adsrLoudness.setSampleRate(sr);
    adsrFilter.setSampleRate(sr);  
}

void MoogVoice::releaseResources()
{
    bufferOsc1.setSize(0, 0);
    bufferOsc2.setSize(0, 0);
    bufferOsc3.setSize(0, 0);
    bufferNoise.setSize(0, 0);
    fmBufferOsc1.setSize(0, 0);
    fmBufferOsc2.setSize(0, 0);
    fmBufferOsc3.setSize(0, 0);
    fmBufferOsc3Lfo.setSize(0, 0);
    fmBufferFilter.setSize(0, 0);
}

void MoogVoice::renderNextBlock(AudioBuffer< float >& outputBuffer, int startSample, int numSamples) 
{
    float** bufferData = outputBuffer.getArrayOfWritePointers();      
   
    frequencyModulation(startSample, numSamples);

    const double totMod = modWheel + modAmount;

    // Audio Source
    osc1.getNextAudioBlock(bufferOsc1, fmBufferOsc1, fmBufferOsc3Lfo, totMod, modMix, numOutputChannels, startSample, numSamples);
    osc2.getNextAudioBlock(bufferOsc2, fmBufferOsc2, fmBufferOsc3Lfo, totMod, modMix, numOutputChannels, startSample, numSamples);
    noise.getNextAudioBlock(bufferNoise, numOutputChannels, startSample, numSamples);            
    
    // Mixer
    mixer.getNextAudioBlock(outputBuffer, bufferOsc1, bufferOsc2, bufferOsc3, bufferNoise, numOutputChannels, startSample, numSamples);
    
    // Ladder Filter 
    for (int i = startSample; i < startSample + numSamples; ++i) {      
        moogLpFilter.setCutoffFrequency(jmax(fmBufferFilter.getSample(0, i), 5.0));
        bufferData[0][i] = moogLpFilter.processSample(bufferData[0][i]);
    }
    
    // VCA
    adsrLoudness.applyEnvelopeToBuffer(outputBuffer, startSample, numSamples);       
    
    // Final Gain
    //outputBuffer.applyGain(0, startSample, numSamples, gain.getNextValue());   
    gain.applyGain(bufferData[0] + startSample, numSamples);

    if (!(adsrFilter.isActive() || adsrLoudness.isActive()) && isVoiceActive())
        resetVoice();
}

void MoogVoice::frequencyModulation(int startSample, int numSamples) { 
    double** fmFilterData = fmBufferFilter.getArrayOfWritePointers();
    double** fmOsc1Data = fmBufferOsc1.getArrayOfWritePointers();
    double** fmOsc2Data = fmBufferOsc2.getArrayOfWritePointers();
    double** fmOsc3Data = fmBufferOsc3.getArrayOfWritePointers();

    const double adsrFilterNoteRange = hz2nn(MAX_CUTOFF_RATE) - 12.0; // - cutOffNote;

    for (int i = startSample; i < (startSample + numSamples); ++i) {   
        // Setting standard value for the filter and the oscillator frequency
        const double currentNoteNumber = noteNumber.getNextValue();                            
        const double adsrFilterValue = adsrFilter.getNextSample();
        // double adsrFilterFrequencyValue = 0.0;
        // adsrFilterFrequencyValue = jmap(adsrFilterValue, cutOffFrequency, cutOffFrequency+(MAX_CUTOFF_RATE-cutOffFrequency)*filterContour); 
        // adsrFilterFrequencyValue += ((keyboardControl1 * ONE_THRD + keyboardControl2 * TWO_THRD) * nn2hz(currentNoteNumber) - 10.0);

        const double adsrFilterNote = adsrFilterValue * adsrFilterNoteRange * filterContour;
        const double keyTrack = (keyboardControl1 * ONE_THRD + keyboardControl2 * TWO_THRD) * currentNoteNumber;
        const double filterNoteValue = cutOffNote + keyTrack + adsrFilterNote;
        
        // Computing the modulation value and the fm buffer of filter and oscillator
        //const double modSample = modMix *
        //    (modRx ? lfo.getNextAudioSample() : noise.getNextAudioSample()) +
        //    ((1 - modMix) *
        //        (modSx ? jmap(adsrFilterValue, -1.0, 0.0) : oldOsc3Sample > 0 ? jmin(oldOsc3Sample, 1.0) : jmax(oldOsc3Sample, - 1.0))); //jmap(oldOsc3Sample, -0.5, 0.5, -1.0, 1.0)));

        const double modSample = modMix  * (modRx ? lfo.getNextAudioSample()         : noise.getNextAudioSample()) +
                         ((1.0 - modMix) * (modSx ? adsrFilterValue /*jmap(adsrFilterValue, -1.0, 0.0)*/ : jlimit(-1.0, 1.0, oldOsc3Sample))); // jmap(adsrFilterValue, -1.0, 0.0) ?!?!?!?!

        const double totModAmount = modWheel + modAmount;

        const double modNoteAmount = totModAmount * modSample * 24.0;

        // Saving the and convert the semitones noteNumber value to the real frequency value
        fmOsc1Data[0][i] = currentNoteNumber + pitchWheel + tuneKnob + (isOscModOn ? modNoteAmount : 0.0);
        fmOsc2Data[0][i] = fmOsc1Data[0][i] + detuneOsc2;
        fmOsc3Data[0][i] = fmOsc1Data[0][i] + detuneOsc3;     
        fmOsc1Data[0][i] = nn2hz(fmOsc1Data[0][i]) * octaveOsc1;
        fmOsc2Data[0][i] = nn2hz(fmOsc2Data[0][i]) * octaveOsc2;
        fmOsc3Data[0][i] = nn2hz(fmOsc3Data[0][i]) * octaveOsc3;
        // fmFilterData[0][i] = adsrFilterFrequencyValue + (isFilterModOn ? modWheel * modSample * (adsrFilterFrequencyValue + 10.0) : 0.0);
        fmFilterData[0][i] = nn2hz(filterNoteValue + (isFilterModOn ? modNoteAmount : 0.0));

        // Serve per inviare i valori delle frequenze di osc3 e lfo al blit in modo da modificare il decayFactor
        // fmBufferOsc3Lfo.setSample(0, i, jmax(lfoFreq * modRx, fmOsc3Data[0][i] * !modSx) * isOscModOn);
        fmBufferOsc3Lfo.setSample(0, i, (lfoFreq * sqrt(modMix) * modRx + fmOsc3Data[0][i] * sqrt(1.0 - modMix) * !modSx) * isOscModOn);
        
        // Setting osc3 frequency sample //////////////////////////////////// Qui va controllato cosa fa il moog vero
        oldOsc3Sample = osc3Control ?
            (osc3.getNextAudioSample(fmOsc3Data[0][i], fmBufferOsc3Lfo.getSample(0, i), totModAmount, modMix)) :
            (osc3.getNextAudioSample(nn2hz(57.0 + detuneOsc3) * octaveOsc3, 0.0, totModAmount, modMix));

        bufferOsc3.setSample(0, i, oldOsc3Sample);      
    }    
}

void MoogVoice::setGlide(bool newValue)
{
    isGlideActive = newValue;
    setGlideRate(currentSliderGlideValue);
}

void MoogVoice::setGlideRate(float newValue)
{
    currentSliderGlideValue = newValue;
    noteNumber.reset(sampleRate, (isGlideActive ? newValue : DEFAULT_GLIDE_RATE));
}

double MoogVoice::nn2hz(double nn)
{
    return pow(2.0, (nn - 69.0) / 12.0) * 440.0;
}

double MoogVoice::hz2nn(double hz)
{
    return 12.0 * log2(hz / 440.0) + 69.0;
}

void MoogVoice::resetVoice()
{
    osc1.clearAccumulator();
    osc2.clearAccumulator();
    osc3.clearAccumulator();
    adsrFilter.reset();
    adsrLoudness.reset();
    clearCurrentNote();
}

void MoogVoice::parameterChanged(const String& paramID, float newValue) 
{
    // Oscillatori
    if (paramID == NAME_WF_OSC1)       
        osc1.setWaveForm(newValue);       
    if (paramID == NAME_WF_OSC2)
        osc2.setWaveForm(newValue);
    if (paramID == NAME_WF_OSC3)
        osc3.setWaveForm(newValue);       
    if (paramID == NAME_OCTAVE_OSC1)
        setOctaveOsc1(newValue);
    if (paramID == NAME_OCTAVE_OSC2)
        setOctaveOsc2(newValue);
    if (paramID == NAME_OCTAVE_OSC3)
        setOctaveOsc3(newValue);
    if (paramID == NAME_DETUNE_OSC2)
        detuneOsc2 = newValue;
    if (paramID == NAME_DETUNE_OSC3)
        detuneOsc3 = newValue;
    // Mixer
    if (paramID == NAME_MUTE_OSC1) 
        mixer.setMuteOsc1(bool(newValue));        
    if (paramID == NAME_MUTE_OSC2)
        mixer.setMuteOsc2(bool(newValue));
    if (paramID == NAME_MUTE_OSC3)
        mixer.setMuteOsc3(bool(newValue));
    if (paramID == NAME_MUTE_NOISE)
        mixer.setMuteNoise(bool(newValue));
    if (paramID == NAME_GAIN_OSC1)
        mixer.setGainOsc1(newValue);
    if (paramID == NAME_GAIN_OSC2)
        mixer.setGainOsc2(newValue);
    if (paramID == NAME_GAIN_OSC3)
        mixer.setGainOsc3(newValue);
    if (paramID == NAME_GAIN_NOISE)
        mixer.setGainNoise(newValue);
    if (paramID == NAME_GAIN_EXT_INPUT)
        mixer.setGainExtInput(newValue);                                              
    // LFO
    if (paramID == NAME_WF_LFO)
    {
        newValue ? lfo.setWaveForm(newValue + 2) : lfo.setWaveForm(newValue); // wat? Penso sia per distinguere lfo per blit ed lfo per modulazioni
        // lfo.setWaveForm(newValue * 2); ?
    }
    if (paramID == NAME_RATE_LFO)
    {
        lfoFreq = newValue;
        lfo.setFrequency(newValue);
    }        
    // Noise
    if (paramID == NAME_NOISE_TYPE)
        noise.setNoiseType(bool(newValue));
    // Filter
    if (paramID == NAME_CUTOFF_RATE)
        cutOffNote = hz2nn(newValue);
    if (paramID == NAME_RESONANCE) {
        moogLpFilter.setResonance(newValue); 
    }
    if (paramID == NAME_CONTOUR)
        filterContour = newValue;
    if (paramID == NAME_ATTACK_FILTER) 
    {
        adsrFilterParams.attack = newValue;
        adsrFilter.setParameters(adsrFilterParams);
    }
    if (paramID == NAME_DECAY_FILTER) 
    {
        adsrFilterParams.decay = newValue;
        adsrFilterParams.release = isReleaseActive ? newValue : DECAY_FOR_NO_DECAY;
        adsrFilter.setParameters(adsrFilterParams);
    }
    if (paramID == NAME_SUSTAIN_FILTER) 
    {
        adsrFilterParams.sustain = newValue;
        adsrFilter.setParameters(adsrFilterParams);
    }
    // Loudness e ADSR
    if (paramID == NAME_ATTACK_LOUD) 
    {
        adsrLoudnessParams.attack = newValue;
        adsrLoudness.setParameters(adsrLoudnessParams);
    }
    if (paramID == NAME_DECAY_LOUD) 
    {
        adsrLoudnessParams.decay = newValue;
        adsrLoudnessParams.release = isReleaseActive ? newValue : DECAY_FOR_NO_DECAY;
        adsrLoudness.setParameters(adsrLoudnessParams);
    }
    if (paramID == NAME_SUSTAIN_LOUD) 
    {
        adsrLoudnessParams.sustain = newValue;
        adsrLoudness.setParameters(adsrLoudnessParams);
    }
    // Generic Enablers
    if (paramID == NAME_RELEASE_ENABLER)
    {
        isReleaseActive = bool(newValue);
        if (!isReleaseActive) {
            adsrLoudnessParams.release = DECAY_FOR_NO_DECAY;
            adsrFilterParams.release = DECAY_FOR_NO_DECAY;
        }
        else {
            adsrLoudnessParams.release = adsrLoudnessParams.decay;
            adsrFilterParams.release = adsrFilterParams.decay;
        }
        adsrLoudness.setParameters(adsrLoudnessParams);
        adsrFilter.setParameters(adsrFilterParams);
    }
    if (paramID == NAME_GLIDE_ENABLER)
        setGlide(bool(newValue));
    if (paramID == NAME_KEYBOARD_CONTROL_1)
        keyboardControl1 = bool(newValue);
    if (paramID == NAME_KEYBOARD_CONTROL_2) 
        keyboardControl2 = bool(newValue);
    if (paramID == NAME_OSC3_CONTROL)
        osc3Control = bool(newValue);
    if (paramID == NAME_OSC_MODULATION)
    {
        isOscModOn = bool(newValue);
        osc1.setModNoise(!modRx, isOscModOn);
        osc2.setModNoise(!modRx, isOscModOn);
        osc3.setModNoise(!modRx, isOscModOn);
    }
        
    if (paramID == NAME_FILTER_MODULATION)
        isFilterModOn = bool(newValue);
    // Modulation Controls
    if (paramID == NAME_MODSX)
        modSx = bool(newValue);
    if (paramID == NAME_MODRX)
    {
        modRx = bool(newValue);
        osc1.setModNoise(!modRx, isOscModOn);
        osc2.setModNoise(!modRx, isOscModOn);
        osc3.setModNoise(!modRx, isOscModOn);
    }
        
    if (paramID == NAME_MODULATION_MIX)
        modMix = newValue;
    if (paramID == NAME_MODULATION_WHEEL)
        modAmount = newValue;
    // Generic Controls            
    if (paramID == NAME_GLIDE_RATE)
        setGlideRate(newValue);      
    if (paramID == NAME_TUNE_WHEEL)
        tuneKnob = newValue;
    if (paramID == NAME_GAIN_ENABLER)
    {
        gainEnabler = bool(newValue);
        updateVCAGain();
    }        
    if (paramID == NAME_GAIN)
    {
        currentSliderGainValue = newValue;
        updateVCAGain();
    }   
}

void MoogVoice::updateVCAGain()
{
    gain.setTargetValue(currentSliderGainValue * currentVelocity * gainEnabler);
}
