/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "MoogAudioProcessor.h"
#include "MoogEditor.h"

//==============================================================================
MoogAudioProcessor::MoogAudioProcessor() : AudioProcessor(BusesProperties().withInput("Input", juce::AudioChannelSet::mono(), true).withOutput("Output", juce::AudioChannelSet::stereo(), true)), parameters(*this, &undoManager, Identifier("MoogParameters"), createParameterLayout())
{
    synth.addSound(new MoogSound());
    synth.addVoice(new MoogVoice());
    //synth.setNoteStealingEnabled(true);

    // Listener oscillatori
    parameters.addParameterListener(NAME_MUTE_OSC1, dynamic_cast<MoogVoice*>(synth.getVoice(0)));     
    parameters.addParameterListener(NAME_MUTE_OSC2, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_MUTE_OSC3, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_WF_OSC1, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_WF_OSC2, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_WF_OSC3, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_OCTAVE_OSC1, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_OCTAVE_OSC2, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_OCTAVE_OSC3, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_DETUNE_OSC2, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_DETUNE_OSC3, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_GAIN_OSC1, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_GAIN_OSC2, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_GAIN_OSC3, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    // Listener LFO
    parameters.addParameterListener(NAME_WF_LFO, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_RATE_LFO, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    // Listener Noise
    parameters.addParameterListener(NAME_MUTE_NOISE, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_GAIN_NOISE, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_NOISE_TYPE, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    // Listener Filter
    parameters.addParameterListener(NAME_CUTOFF_RATE, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_RESONANCE, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_CONTOUR, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_ATTACK_FILTER, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_DECAY_FILTER, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_SUSTAIN_FILTER, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    // Listener Loudness ADSR
    parameters.addParameterListener(NAME_ATTACK_LOUD, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_DECAY_LOUD, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_SUSTAIN_LOUD, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    // Listener generic enablers
    parameters.addParameterListener(NAME_RELEASE_ENABLER, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_GLIDE_ENABLER, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_KEYBOARD_CONTROL_1, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_KEYBOARD_CONTROL_2, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_OSC3_CONTROL, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_OSC_MODULATION, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_FILTER_MODULATION, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_MUTE_EXT_INPUT, this);
    parameters.addParameterListener(NAME_GAIN_ENABLER, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    // Listener modulation controls
    parameters.addParameterListener(NAME_MODSX, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_MODRX, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_MODULATION_MIX, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_MODULATION_WHEEL, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    // Listener generic controls   
    parameters.addParameterListener(NAME_GLIDE_RATE, dynamic_cast<MoogVoice*>(synth.getVoice(0)));    
    parameters.addParameterListener(NAME_TUNE_WHEEL, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_GAIN_EXT_INPUT, dynamic_cast<MoogVoice*>(synth.getVoice(0)));
    parameters.addParameterListener(NAME_GAIN, dynamic_cast<MoogVoice*>(synth.getVoice(0)));

    parameters.addParameterListener(NAME_STEALING, this);
}
MoogAudioProcessor::~MoogAudioProcessor() {}
//==============================================================================
void MoogAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    synth.setCurrentPlaybackSampleRate(sampleRate);
    if (auto voice = dynamic_cast<MoogVoice*>(synth.getVoice(0)))
        voice->prepareToPlay(sampleRate, samplesPerBlock, 1);
    
    // Gestione oversampling e saturatore
    auto numCh = jmax(getTotalNumOutputChannels(), getTotalNumInputChannels());
    dsp::ProcessSpec spec{ sampleRate, samplesPerBlock, numCh };
    saturator.prepare(spec);
    setLatencySamples(saturator.getLatency());
}
void MoogAudioProcessor::releaseResources() {}

bool MoogAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{ 
    if (layouts.getMainOutputChannelSet() != juce::AudioChannelSet::stereo() && layouts.getMainOutputChannelSet() != juce::AudioChannelSet::mono())
        return false;   
    if (layouts.getMainInputChannelSet() != juce::AudioChannelSet::mono())
        return false;
    return true; 
}

void MoogAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{   
    juce::ScopedNoDenormals noDenormals;
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels(); 
    const auto numSamples = buffer.getNumSamples();    

    if (!muteExtInput) buffer.clear();
    synth.renderNextBlock(buffer, midiMessages, 0, numSamples);

    // HPF - non implementato
    // SOFTCLIP
    dsp::AudioBlock<float> block(buffer);
    dsp::ProcessContextReplacing<float> context(block);
    saturator.process(context);

    if (totalNumOutputChannels == 2) buffer.copyFrom(1, 0, buffer, 0, 0, numSamples);

    
}

void MoogAudioProcessor::panic()
{
    synth.panic();

    if (auto voice = dynamic_cast<MoogVoice*>(synth.getVoice(0)))
        voice->resetVoice();
}

//==============================================================================
bool MoogAudioProcessor::hasEditor() const { return true; }
juce::AudioProcessorEditor* MoogAudioProcessor::createEditor() { return new MoogEditor(*this, parameters); }
//==============================================================================
void MoogAudioProcessor::getStateInformation (juce::MemoryBlock& destData)
{
    auto state = parameters.copyState();
    std::unique_ptr<XmlElement> xml(state.createXml());
    copyXmlToBinary(*xml, destData); 
}
void MoogAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    std::unique_ptr<XmlElement> xmlState(getXmlFromBinary(data, sizeInBytes));
    if (xmlState.get() != nullptr)
        if (xmlState->hasTagName(parameters.state.getType()))
            parameters.replaceState(ValueTree::fromXml(*xmlState)); 
}
void MoogAudioProcessor::parameterChanged(const String& paramID, float newValue)
{
    if (paramID == NAME_MUTE_EXT_INPUT)
        muteExtInput = bool(newValue);

    if (paramID == NAME_STEALING)
        synth.setStealing(roundToInt(newValue));
}
//==============================================================================
// This creates new instances of the plugin..
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter() { return new MoogAudioProcessor(); }
