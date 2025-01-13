/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include <stack>
#include "MoogVoice.h"
#include "MoogSound.h"
#include "MoogParameters.h"
#include "Oversample.h"
#include "MonoSynth.h"

//==============================================================================
class MoogAudioProcessor  : public juce::AudioProcessor, public AudioProcessorValueTreeState::Listener
{
public:
    //==============================================================================
    MoogAudioProcessor();
    ~MoogAudioProcessor() override;

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;
    void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    //==============================================================================
   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif
    //==============================================================================
    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const juce::String getName() const override { return JucePlugin_Name; };
    bool acceptsMidi() const override { return true; };
    bool producesMidi() const override { return false; };
    bool isMidiEffect() const override { return false; };
    double getTailLengthSeconds() const override { return false; };

    //==============================================================================
    int getNumPrograms() override { return 1; };
    int getCurrentProgram() override { return 0; };
    void setCurrentProgram(int index) override {};
    const juce::String getProgramName(int index) override { return {}; };
    void changeProgramName(int index, const juce::String& newName) override {};

    //==============================================================================
    void getStateInformation(juce::MemoryBlock& destData) override;
    void setStateInformation(const void* data, int sizeInBytes) override;

    //==============================================================================
    
    File defaultPresetLocation = File::getSpecialLocation(File::SpecialLocationType::commonDocumentsDirectory);

    void panic();

private:
    AudioProcessorValueTreeState parameters;
    UndoManager undoManager;
    // Synthesiser synth;
    MonoSynthesiser synth;
    OversampledSaturation saturator;
    bool muteExtInput = DEFAULT_MUTE_EXT_INPUT;
    void parameterChanged(const String& paramID, float newValue) override;
    int cont = 0;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MoogAudioProcessor)
};
