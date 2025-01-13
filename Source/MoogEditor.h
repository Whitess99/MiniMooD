/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.6

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>
#include "MoogAudioProcessor.h"
#include "MoogParameters.h"
#include "MoogLookAndFeel.h"

typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MoogEditor  : public juce::AudioProcessorEditor,
                    public juce::Button::Listener
{
public:
    //==============================================================================
    MoogEditor (MoogAudioProcessor& p, AudioProcessorValueTreeState& vts);
    ~MoogEditor() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    MoogAudioProcessor& processor;
    AudioProcessorValueTreeState& valueTreeState;
    RotarySliderLookAndFeel RotarySliderTheme0{ 0 };
    RotarySliderLookAndFeel RotarySliderTheme1{ 1 };
    RotarySliderLookAndFeel RotarySliderTheme2{ 2 };
    LinearSliderLookAndFeel LinearSliderThemeOrange{ Colour(0xfff05b2c) };
    LinearSliderLookAndFeel LinearSliderThemeBlue{ Colour(0xff42a2c8) };
    LinearSliderLookAndFeel LinearSliderThemeBlack{ Colour(0xff8e8686) };
    LinearSliderLookAndFeel LinearSliderThemeWhite{ Colour(0xefffffff) };

    // Oscillators
    std::unique_ptr<SliderAttachment> muteOsc1Attachment;
    std::unique_ptr<SliderAttachment> muteOsc2Attachment;
    std::unique_ptr<SliderAttachment> muteOsc3Attachment;
    std::unique_ptr<SliderAttachment> waveformOsc1Attachment;
    std::unique_ptr<SliderAttachment> waveformOsc2Attachment;
    std::unique_ptr<SliderAttachment> waveformOsc3Attachment;
    std::unique_ptr<SliderAttachment> octaveOsc1Attachment;
    std::unique_ptr<SliderAttachment> octaveOsc2Attachment;
    std::unique_ptr<SliderAttachment> octaveOsc3Attachment;
    std::unique_ptr<SliderAttachment> detuneOsc2Attachment;
    std::unique_ptr<SliderAttachment> detuneOsc3Attachment;
    std::unique_ptr<SliderAttachment> gainOsc1Attachment;
    std::unique_ptr<SliderAttachment> gainOsc2Attachment;
    std::unique_ptr<SliderAttachment> gainOsc3Attachment;
    // LFO
    std::unique_ptr<SliderAttachment> waveformLfoAttachment;
    std::unique_ptr<SliderAttachment> rateLfoAttachment;
    // Noise
    std::unique_ptr<SliderAttachment> muteNoiseAttachment;
    std::unique_ptr<SliderAttachment> gainNoiseAttachment;
    std::unique_ptr<SliderAttachment> typeNoiseAttachment;
    // Filter
    std::unique_ptr<SliderAttachment> cutoffRateFilterAttachment;
    std::unique_ptr<SliderAttachment> resonanceFilterAttachment;
    std::unique_ptr<SliderAttachment> contourFilterAttachment;
    std::unique_ptr<SliderAttachment> attackFilterAttachment;
    std::unique_ptr<SliderAttachment> decayFilterAttachment;
    std::unique_ptr<SliderAttachment> sustainFilterAttachment;
    // Loudness ADSR
    std::unique_ptr<SliderAttachment> attackLoudnessAttachment;
    std::unique_ptr<SliderAttachment> decayLoudnessAttachment;
    std::unique_ptr<SliderAttachment> sustainLoudnessAttachment;
    // Generic Enablers
    std::unique_ptr<SliderAttachment> releaseEnablerAttachment;
    std::unique_ptr<SliderAttachment> glideEnablerAttachment;
    std::unique_ptr<SliderAttachment> keyboardControl1Attachment;
    std::unique_ptr<SliderAttachment> keyboardControl2Attachment;
    std::unique_ptr<SliderAttachment> osc3ControlEnablerAttachment;
    std::unique_ptr<SliderAttachment> oscillatorModulationAttachment;
    std::unique_ptr<SliderAttachment> filterModulationAttachment;
    std::unique_ptr<SliderAttachment> muteExtInputAttachment;
    std::unique_ptr<SliderAttachment> gainEnablerAttachment;
    // Modulation parameters
    std::unique_ptr<SliderAttachment> modSxAttachment;
    std::unique_ptr<SliderAttachment> modRxAttachment;
    std::unique_ptr<SliderAttachment> modulationMixAttachment;
    std::unique_ptr<SliderAttachment> modulationWheelAttachment;
    // Generic controls
    std::unique_ptr<SliderAttachment> glideRateAttachment;
    std::unique_ptr<SliderAttachment> pitchWheelAttachment;
    std::unique_ptr<SliderAttachment> gainExtInputAttachment;
    std::unique_ptr<SliderAttachment> gainAttachment;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::Slider> octaveOsc1Slider;
    std::unique_ptr<juce::Slider> waveformOsc1Slider;
    std::unique_ptr<juce::Slider> waveformOsc2Slider;
    std::unique_ptr<juce::Slider> octaveOsc3Slider;
    std::unique_ptr<juce::Slider> detuneOsc2Slider;
    std::unique_ptr<juce::Slider> octaveOsc2Slider;
    std::unique_ptr<juce::Slider> detuneOsc3Slider;
    std::unique_ptr<juce::Slider> waveformOsc3Slider;
    std::unique_ptr<juce::Slider> gainOsc1Slider;
    std::unique_ptr<juce::Slider> gainOsc2Slider;
    std::unique_ptr<juce::Slider> gainOsc3Slider;
    std::unique_ptr<juce::Slider> muteOsc1Slider;
    std::unique_ptr<juce::Slider> muteOsc2Slider;
    std::unique_ptr<juce::Slider> muteOsc3Slider;
    std::unique_ptr<juce::Slider> muteNoiseSlider;
    std::unique_ptr<juce::Slider> gainNoiseSlider;
    std::unique_ptr<juce::Slider> attackLoudnessSlider;
    std::unique_ptr<juce::Slider> decayLoudnessSlider;
    std::unique_ptr<juce::Slider> sustainLoudnessSlider;
    std::unique_ptr<juce::Slider> attackFilterSlider;
    std::unique_ptr<juce::Slider> decayFilterSlider;
    std::unique_ptr<juce::Slider> contourFilterSlider;
    std::unique_ptr<juce::Slider> resonanceFilterSlider;
    std::unique_ptr<juce::Slider> cutoffRateFilterSlider;
    std::unique_ptr<juce::Slider> sustainFilterSlider;
    std::unique_ptr<juce::Slider> filterModulationEnablerSlider;
    std::unique_ptr<juce::Slider> rateGlideSlider;
    std::unique_ptr<juce::Slider> oscModulationEnablerSlider;
    std::unique_ptr<juce::Slider> rateLfoSlider;
    std::unique_ptr<juce::Slider> waveformLfoSlider;
    std::unique_ptr<juce::Slider> glideEnablerSlider;
    std::unique_ptr<juce::Slider> releaseEnablerSlider;
    std::unique_ptr<juce::Slider> typeNoiseSlider;
    std::unique_ptr<juce::Slider> gainMoogSlider;
    std::unique_ptr<juce::Slider> gainEnablerSlider;
    std::unique_ptr<juce::Slider> osc3ControlEnablerSlider;
    std::unique_ptr<juce::Slider> modulationMixSlider;
    std::unique_ptr<juce::Slider> modRxSlider;
    std::unique_ptr<juce::Slider> modSxSlider;
    std::unique_ptr<juce::Slider> pitchWheelSlider;
    std::unique_ptr<juce::Slider> gainExtInputSlider;
    std::unique_ptr<juce::Slider> modulationWheelSlider;
    std::unique_ptr<juce::Slider> keyboardControl1Slider;
    std::unique_ptr<juce::Slider> keyboardControl2Slider;
    std::unique_ptr<juce::Slider> muteExtInputSlider;
    std::unique_ptr<juce::TextButton> saveButton;
    std::unique_ptr<juce::TextButton> loadButton;
    std::unique_ptr<juce::TextButton> redoButton;
    std::unique_ptr<juce::TextButton> undoButton;
    std::unique_ptr<juce::TextButton> panicButton;
    juce::Path internalPath1;
    juce::Path internalPath2;
    juce::Path internalPath3;
    juce::Path internalPath4;
    juce::Path internalPath5;
    juce::Path internalPath6;
    juce::Path internalPath7;
    juce::Path internalPath8;
    juce::Path internalPath9;
    juce::Path internalPath10;
    juce::Path internalPath11;
    juce::Path internalPath12;
    juce::Path internalPath13;
    juce::Path internalPath14;
    juce::Path internalPath15;
    juce::Path internalPath16;
    juce::Path internalPath17;
    juce::Path internalPath18;
    juce::Path internalPath19;
    juce::Path internalPath20;
    juce::Path internalPath21;
    juce::Path internalPath22;
    juce::Path internalPath23;
    juce::Path internalPath24;
    juce::Path internalPath25;
    juce::Path internalPath26;
    juce::Path internalPath27;
    juce::Path internalPath28;
    juce::Path internalPath29;
    juce::Path internalPath30;
    juce::Path internalPath31;
    juce::Path internalPath32;
    juce::Path internalPath33;
    juce::Path internalPath34;
    juce::Path internalPath35;
    juce::Path internalPath36;
    juce::Path internalPath37;
    juce::Path internalPath38;
    juce::Path internalPath39;
    juce::Path internalPath40;
    juce::Path internalPath41;
    juce::Path internalPath42;
    juce::Path internalPath43;
    juce::Path internalPath44;
    juce::Path internalPath45;
    juce::Path internalPath46;
    juce::Path internalPath47;
    juce::Path internalPath48;
    juce::Path internalPath49;
    juce::Path internalPath50;
    juce::Path internalPath51;
    juce::Path internalPath52;
    juce::Path internalPath53;
    juce::Path internalPath54;
    juce::Path internalPath55;
    juce::Path internalPath56;
    juce::Path internalPath57;
    juce::Path internalPath58;
    juce::Path internalPath59;
    juce::Path internalPath60;
    juce::Path internalPath61;
    juce::Path internalPath62;
    juce::Path internalPath63;
    juce::Path internalPath64;
    juce::Path internalPath65;
    juce::Path internalPath66;
    juce::Path internalPath67;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MoogEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

