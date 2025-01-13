/*
  ==============================================================================

    SynthVoice.h
    Created: 9 Jul 2021 6:48:18pm
    Author:  david

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "MoogSound.h"
#include "MoogMixer.h"
#include "MoogOsc.h"
#include "MoogLFO.h"
#include "MoogNoise.h"
#include "MoogParameters.h"
#include "MoogFilter.h"

class MoogVoice : public juce::SynthesiserVoice, public AudioProcessorValueTreeState::Listener
{
public:
    MoogVoice();
    bool canPlaySound(SynthesiserSound* sound) override;
    void startNote(int midiNoteNumber, float velocity, SynthesiserSound* sound, int currentPitchWheelPosition) override;
    void stopNote(float velocity, bool allowTailOff) override;
    void pitchWheelMoved(int newPitchWheelValue) override;
    void controllerMoved(int controllerNumber, int newControllerValue) override;
    void prepareToPlay(double sampleRate, int samplesPerBlock, int outputChannels);
    void renderNextBlock(AudioBuffer< float >& outputBuffer, int startSample, int numSamples) override;
    void setOctaveOsc1(float newValue) { newValue > 0.0f ? octaveOsc1 = pow(2.0, newValue - 3.0) : octaveOsc1 = 0.0078125; } // era 0.0090
    void setOctaveOsc2(float newValue) { newValue > 0.0f ? octaveOsc2 = pow(2.0, newValue - 3.0) : octaveOsc2 = 0.0078125; }
    void setOctaveOsc3(float newValue) { newValue > 0.0f ? octaveOsc3 = pow(2.0, newValue - 3.0) : octaveOsc3 = 0.0078125; }
    void releaseResources();
    void resetVoice();

 private: 
     const double TWO_THRD = 2.0 / 3.0;
     const double  ONE_THRD = 1.0 - TWO_THRD;

     int cont = 0;


     // Store the sample value 
    AudioBuffer<float> bufferOsc1;                                                                 
    AudioBuffer<float> bufferOsc2;
    AudioBuffer<float> bufferOsc3;
    AudioBuffer<float> bufferNoise;

    // Store the frequency value    
    AudioBuffer<double> fmBufferOsc1;
    AudioBuffer<double> fmBufferOsc2;
    AudioBuffer<double> fmBufferOsc3;
    AudioBuffer<double> fmBufferFilter;
    AudioBuffer<double> fmBufferOsc3Lfo;

    SmoothedValue<double, ValueSmoothingTypes::Linear> noteNumber;
    SmoothedValue<float, ValueSmoothingTypes::Linear> gain;

    // Minimoog components
    MoogOsc osc1{ 0 };
    MoogOsc osc2{ 0 };
    MoogOsc osc3{ 1 };
    MoogNoise noise;
    MoogMixer mixer;
    MoogLFO lfo;   
    MoogFilter moogLpFilter;
    ADSR adsrLoudness;
    ADSR::Parameters adsrLoudnessParams;
    ADSR adsrFilter;
    ADSR::Parameters adsrFilterParams;
   
    // Frequency and slider value
    double sampleRate = 1.0;
    double lfoFreq = DEFAULT_RATE_LFO;
    float currentSliderGainValue = DEFAULT_GAIN;
    float currentSliderGlideValue = DEFAULT_GLIDE_RATE;  
    float currentVelocity = 1.0;

    // Filter
    double cutOffNote = hz2nn(DEFAULT_CUTOFF_RATE);
    double filterContour = DEFAULT_CONTOUR;

    // Modulations
    double modMix = DEFAULT_MODULATION_MIX;
    double modWheel = DEFAULT_MODULATION_WHEEL;
    double modAmount = DEFAULT_MODULATION_WHEEL;
    double oldOsc3Sample = 0.0f;

    // Pitch adjustment
    double pitchWheel = DEFAULT_PITCH_WHEEL;
    double tuneKnob =  DEFAULT_TUNE_WHEEL;
    double detuneOsc2 = DEFAULT_DETUNE;
    double detuneOsc3 = DEFAULT_DETUNE;
    double octaveOsc1 = 1.0;
    double octaveOsc2 = 1.0;
    double octaveOsc3 = 1.0;
    int numOutputChannels = 1;

    // Various enabler
    bool modSx = DEFAULT_MODSX;
    bool modRx = DEFAULT_MODRX;
    bool isOscModOn = DEFAULT_OSC_MODULATION;
    bool isFilterModOn = DEFAULT_FILTER_MODULATION;
    bool isReleaseActive = DEFAULT_RELEASE_ENABLER;
    bool isGlideActive = DEFAULT_GLIDE_ENABLER;     
    bool osc3Control = DEFAULT_OSC3_CONTROL; 
    bool keyboardControl1 = DEFAULT_KEYBOARD_CONTROL_1;
    bool keyboardControl2 = DEFAULT_KEYBOARD_CONTROL_2;
    bool gainEnabler = DEFAULT_GAIN_ENABLER;
   
    void parameterChanged(const String& paramID, float newValue) override;
    void frequencyModulation(int startSample, int numSamples);
    void setGlide(bool newValue);
    void setGlideRate(float newValue);
    void updateVCAGain();

    static double nn2hz(double nn);
    static double hz2nn(double hz);
};