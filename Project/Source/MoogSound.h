/*
  ==============================================================================

    SynthSound.h
    Created: 9 Jul 2021 6:48:45pm
    Author:  david

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class MoogSound : public juce::SynthesiserSound
{
public: 
    bool appliesToNote(int midiNoteNumber) override {return true;};
    bool appliesToChannel(int midiChannel) override {return true;};
};