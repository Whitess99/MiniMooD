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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MoogEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MoogEditor::MoogEditor (MoogAudioProcessor& p, AudioProcessorValueTreeState& vts)
    : AudioProcessorEditor(&p), processor(p), valueTreeState(vts)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //  waveformOsc3Slider->setRotaryParameters(-1.39, 1.39, 1);
    RotarySliderTheme0.setNumOfTicks(6);
    RotarySliderTheme1.setNumOfTicks(11);
    RotarySliderTheme2.setNumOfTicks(17);
    //[/Constructor_pre]

    octaveOsc1Slider.reset (new juce::Slider ("octave_osc1_slider"));
    addAndMakeVisible (octaveOsc1Slider.get());
    octaveOsc1Slider->setRange (0, 10, 0);
    octaveOsc1Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    octaveOsc1Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    octaveOsc1Slider->setBounds (237, 38, 85, 75);

    waveformOsc1Slider.reset (new juce::Slider ("waveform_osc1_slider"));
    addAndMakeVisible (waveformOsc1Slider.get());
    waveformOsc1Slider->setRange (0, 10, 0);
    waveformOsc1Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    waveformOsc1Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    waveformOsc1Slider->setBounds (449, 38, 85, 75);

    waveformOsc2Slider.reset (new juce::Slider ("waveform_osc2_slider"));
    addAndMakeVisible (waveformOsc2Slider.get());
    waveformOsc2Slider->setRange (0, 10, 0);
    waveformOsc2Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    waveformOsc2Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    waveformOsc2Slider->setBounds (449, 151, 85, 75);

    octaveOsc3Slider.reset (new juce::Slider ("octave_osc3_slider"));
    addAndMakeVisible (octaveOsc3Slider.get());
    octaveOsc3Slider->setRange (0, 10, 0);
    octaveOsc3Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    octaveOsc3Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    octaveOsc3Slider->setBounds (237, 264, 85, 75);

    detuneOsc2Slider.reset (new juce::Slider ("detune_osc2_slider"));
    addAndMakeVisible (detuneOsc2Slider.get());
    detuneOsc2Slider->setRange (0, 10, 0);
    detuneOsc2Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    detuneOsc2Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    detuneOsc2Slider->setBounds (345, 145, 85, 87);

    octaveOsc2Slider.reset (new juce::Slider ("octave_osc2_slider"));
    addAndMakeVisible (octaveOsc2Slider.get());
    octaveOsc2Slider->setRange (0, 10, 0);
    octaveOsc2Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    octaveOsc2Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    octaveOsc2Slider->setBounds (237, 151, 85, 75);

    detuneOsc3Slider.reset (new juce::Slider ("detune_osc3_slider"));
    addAndMakeVisible (detuneOsc3Slider.get());
    detuneOsc3Slider->setRange (0, 10, 0);
    detuneOsc3Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    detuneOsc3Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    detuneOsc3Slider->setBounds (345, 258, 85, 87);

    waveformOsc3Slider.reset (new juce::Slider ("waveform_osc3_slider"));
    addAndMakeVisible (waveformOsc3Slider.get());
    waveformOsc3Slider->setRange (0, 10, 0);
    waveformOsc3Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    waveformOsc3Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    waveformOsc3Slider->setBounds (449, 264, 85, 75);

    gainOsc1Slider.reset (new juce::Slider ("gain_osc1_slider"));
    addAndMakeVisible (gainOsc1Slider.get());
    gainOsc1Slider->setRange (0, 10, 0);
    gainOsc1Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    gainOsc1Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    gainOsc1Slider->setBounds (566, 38, 85, 75);

    gainOsc2Slider.reset (new juce::Slider ("gain_osc2_slider"));
    addAndMakeVisible (gainOsc2Slider.get());
    gainOsc2Slider->setRange (0, 10, 0);
    gainOsc2Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    gainOsc2Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    gainOsc2Slider->setBounds (566, 151, 85, 75);

    gainOsc3Slider.reset (new juce::Slider ("gain_osc3_slider"));
    addAndMakeVisible (gainOsc3Slider.get());
    gainOsc3Slider->setRange (0, 10, 0);
    gainOsc3Slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    gainOsc3Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    gainOsc3Slider->setBounds (566, 264, 85, 75);

    muteOsc1Slider.reset (new juce::Slider ("mute_osc1_slider"));
    addAndMakeVisible (muteOsc1Slider.get());
    muteOsc1Slider->setRange (0, 10, 0);
    muteOsc1Slider->setSliderStyle (juce::Slider::LinearHorizontal);
    muteOsc1Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    muteOsc1Slider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    muteOsc1Slider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    muteOsc1Slider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    muteOsc1Slider->setBounds (656, 56, 54, 40);

    muteOsc2Slider.reset (new juce::Slider ("mute_osc2_slider"));
    addAndMakeVisible (muteOsc2Slider.get());
    muteOsc2Slider->setRange (0, 10, 0);
    muteOsc2Slider->setSliderStyle (juce::Slider::LinearHorizontal);
    muteOsc2Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    muteOsc2Slider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    muteOsc2Slider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    muteOsc2Slider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));
    muteOsc2Slider->setColour (juce::Slider::rotarySliderFillColourId, juce::Colour (0x849a6c2a));

    muteOsc2Slider->setBounds (656, 168, 54, 40);

    muteOsc3Slider.reset (new juce::Slider ("mute_osc3_slider"));
    addAndMakeVisible (muteOsc3Slider.get());
    muteOsc3Slider->setRange (0, 10, 0);
    muteOsc3Slider->setSliderStyle (juce::Slider::LinearHorizontal);
    muteOsc3Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    muteOsc3Slider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    muteOsc3Slider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    muteOsc3Slider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    muteOsc3Slider->setBounds (656, 280, 54, 40);

    muteNoiseSlider.reset (new juce::Slider ("mute_noise_slider"));
    addAndMakeVisible (muteNoiseSlider.get());
    muteNoiseSlider->setRange (0, 10, 0);
    muteNoiseSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    muteNoiseSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    muteNoiseSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    muteNoiseSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    muteNoiseSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    muteNoiseSlider->setBounds (656, 224, 54, 40);

    gainNoiseSlider.reset (new juce::Slider ("gain_noise_slider"));
    addAndMakeVisible (gainNoiseSlider.get());
    gainNoiseSlider->setRange (0, 10, 0);
    gainNoiseSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    gainNoiseSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    gainNoiseSlider->setBounds (715, 207, 85, 75);

    attackLoudnessSlider.reset (new juce::Slider ("attack_loudness_slider"));
    addAndMakeVisible (attackLoudnessSlider.get());
    attackLoudnessSlider->setRange (0, 10, 0);
    attackLoudnessSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    attackLoudnessSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    attackLoudnessSlider->setBounds (920, 264, 85, 75);

    decayLoudnessSlider.reset (new juce::Slider ("decay_loudness_slider"));
    addAndMakeVisible (decayLoudnessSlider.get());
    decayLoudnessSlider->setRange (0, 10, 0);
    decayLoudnessSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    decayLoudnessSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    decayLoudnessSlider->setBounds (1027, 264, 85, 75);

    sustainLoudnessSlider.reset (new juce::Slider ("sustain_loudness_slider"));
    addAndMakeVisible (sustainLoudnessSlider.get());
    sustainLoudnessSlider->setRange (0, 10, 0);
    sustainLoudnessSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    sustainLoudnessSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    sustainLoudnessSlider->setBounds (1134, 264, 85, 75);

    attackFilterSlider.reset (new juce::Slider ("attack_filter_slider"));
    addAndMakeVisible (attackFilterSlider.get());
    attackFilterSlider->setRange (0, 10, 0);
    attackFilterSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    attackFilterSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    attackFilterSlider->setBounds (920, 140, 85, 75);

    decayFilterSlider.reset (new juce::Slider ("decay_filter_slider"));
    addAndMakeVisible (decayFilterSlider.get());
    decayFilterSlider->setRange (0, 10, 0);
    decayFilterSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    decayFilterSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    decayFilterSlider->setBounds (1027, 140, 85, 75);

    contourFilterSlider.reset (new juce::Slider ("contour_filter_slider"));
    addAndMakeVisible (contourFilterSlider.get());
    contourFilterSlider->setRange (0, 10, 0);
    contourFilterSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    contourFilterSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    contourFilterSlider->setBounds (1134, 38, 85, 75);

    resonanceFilterSlider.reset (new juce::Slider ("resonance_filter_slider"));
    addAndMakeVisible (resonanceFilterSlider.get());
    resonanceFilterSlider->setRange (0, 10, 0);
    resonanceFilterSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    resonanceFilterSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    resonanceFilterSlider->setBounds (1027, 38, 85, 75);

    cutoffRateFilterSlider.reset (new juce::Slider ("cutoff_rate_filter_slider"));
    addAndMakeVisible (cutoffRateFilterSlider.get());
    cutoffRateFilterSlider->setRange (0, 10, 0);
    cutoffRateFilterSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    cutoffRateFilterSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    cutoffRateFilterSlider->setBounds (920, 38, 85, 75);

    sustainFilterSlider.reset (new juce::Slider ("sustain_filter_slider"));
    addAndMakeVisible (sustainFilterSlider.get());
    sustainFilterSlider->setRange (0, 10, 0);
    sustainFilterSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    sustainFilterSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    sustainFilterSlider->setBounds (1134, 140, 85, 75);

    filterModulationEnablerSlider.reset (new juce::Slider ("filter_modulation_enabler_slider"));
    addAndMakeVisible (filterModulationEnablerSlider.get());
    filterModulationEnablerSlider->setRange (0, 10, 0);
    filterModulationEnablerSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    filterModulationEnablerSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    filterModulationEnablerSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    filterModulationEnablerSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    filterModulationEnablerSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    filterModulationEnablerSlider->setBounds (852, 56, 54, 40);

    rateGlideSlider.reset (new juce::Slider ("rate_glide_slider"));
    addAndMakeVisible (rateGlideSlider.get());
    rateGlideSlider->setRange (0, 10, 0);
    rateGlideSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    rateGlideSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    rateGlideSlider->setBounds (1247, 140, 85, 75);

    oscModulationEnablerSlider.reset (new juce::Slider ("osc_modulation_enabler_slider"));
    addAndMakeVisible (oscModulationEnablerSlider.get());
    oscModulationEnablerSlider->setRange (0, 10, 0);
    oscModulationEnablerSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    oscModulationEnablerSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    oscModulationEnablerSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    oscModulationEnablerSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    oscModulationEnablerSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    oscModulationEnablerSlider->setBounds (170, 113, 54, 40);

    rateLfoSlider.reset (new juce::Slider ("rate_lfo_slider"));
    addAndMakeVisible (rateLfoSlider.get());
    rateLfoSlider->setRange (0, 10, 0);
    rateLfoSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    rateLfoSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    rateLfoSlider->setBounds (19, 38, 85, 75);

    waveformLfoSlider.reset (new juce::Slider ("waveform_lfo_slider"));
    addAndMakeVisible (waveformLfoSlider.get());
    waveformLfoSlider->setRange (0, 10, 0);
    waveformLfoSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    waveformLfoSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    waveformLfoSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    waveformLfoSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    waveformLfoSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    waveformLfoSlider->setBounds (124, 56, 54, 40);

    glideEnablerSlider.reset (new juce::Slider ("glide_enabler_slider"));
    addAndMakeVisible (glideEnablerSlider.get());
    glideEnablerSlider->setRange (0, 10, 0);
    glideEnablerSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    glideEnablerSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    glideEnablerSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    glideEnablerSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    glideEnablerSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    glideEnablerSlider->setBounds (1339, 160, 54, 40);

    releaseEnablerSlider.reset (new juce::Slider ("release_enabler_slider"));
    addAndMakeVisible (releaseEnablerSlider.get());
    releaseEnablerSlider->setRange (0, 10, 0);
    releaseEnablerSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    releaseEnablerSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    releaseEnablerSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    releaseEnablerSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    releaseEnablerSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    releaseEnablerSlider->setBounds (1150, 354, 54, 40);

    typeNoiseSlider.reset (new juce::Slider ("type_noise_slider"));
    addAndMakeVisible (typeNoiseSlider.get());
    typeNoiseSlider->setRange (0, 10, 0);
    typeNoiseSlider->setSliderStyle (juce::Slider::LinearVertical);
    typeNoiseSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    typeNoiseSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    typeNoiseSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    typeNoiseSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));
    typeNoiseSlider->setColour (juce::Slider::rotarySliderFillColourId, juce::Colour (0x849a6c2a));
    typeNoiseSlider->setColour (juce::Slider::rotarySliderOutlineColourId, juce::Colour (0x849a6c2a));

    typeNoiseSlider->setBounds (805, 218, 54, 54);

    gainMoogSlider.reset (new juce::Slider ("gain_moog_slider"));
    addAndMakeVisible (gainMoogSlider.get());
    gainMoogSlider->setRange (0, 10, 0);
    gainMoogSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    gainMoogSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    gainMoogSlider->setBounds (1247, 264, 85, 75);

    gainEnablerSlider.reset (new juce::Slider ("gain_enabler_slider"));
    addAndMakeVisible (gainEnablerSlider.get());
    gainEnablerSlider->setRange (0, 10, 0);
    gainEnablerSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    gainEnablerSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    gainEnablerSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    gainEnablerSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    gainEnablerSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    gainEnablerSlider->setBounds (1339, 284, 54, 40);

    osc3ControlEnablerSlider.reset (new juce::Slider ("osc3_control_enabler_slider"));
    addAndMakeVisible (osc3ControlEnablerSlider.get());
    osc3ControlEnablerSlider->setRange (0, 10, 0);
    osc3ControlEnablerSlider->setSliderStyle (juce::Slider::LinearVertical);
    osc3ControlEnablerSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    osc3ControlEnablerSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    osc3ControlEnablerSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    osc3ControlEnablerSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    osc3ControlEnablerSlider->setBounds (185, 274, 40, 54);

    modulationMixSlider.reset (new juce::Slider ("modulation_mix_slider"));
    addAndMakeVisible (modulationMixSlider.get());
    modulationMixSlider->setRange (0, 10, 0);
    modulationMixSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    modulationMixSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    modulationMixSlider->setBounds (19, 253, 85, 75);

    modRxSlider.reset (new juce::Slider ("mod_rx_slider"));
    addAndMakeVisible (modRxSlider.get());
    modRxSlider->setRange (0, 10, 0);
    modRxSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    modRxSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    modRxSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    modRxSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    modRxSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    modRxSlider->setBounds (123, 290, 54, 40);

    modSxSlider.reset (new juce::Slider ("mod_sx_slider"));
    addAndMakeVisible (modSxSlider.get());
    modSxSlider->setRange (0, 10, 0);
    modSxSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    modSxSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    modSxSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    modSxSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    modSxSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    modSxSlider->setBounds (123, 250, 54, 40);

    pitchWheelSlider.reset (new juce::Slider ("pitch_wheel_slider"));
    addAndMakeVisible (pitchWheelSlider.get());
    pitchWheelSlider->setRange (0, 10, 0);
    pitchWheelSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    pitchWheelSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    pitchWheelSlider->setBounds (1278, 32, 85, 87);

    gainExtInputSlider.reset (new juce::Slider ("gain_ext_input_slider"));
    addAndMakeVisible (gainExtInputSlider.get());
    gainExtInputSlider->setRange (0, 10, 0);
    gainExtInputSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    gainExtInputSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    gainExtInputSlider->setBounds (715, 94, 85, 75);

    modulationWheelSlider.reset (new juce::Slider ("modulation_wheel_slider"));
    addAndMakeVisible (modulationWheelSlider.get());
    modulationWheelSlider->setRange (0, 10, 0);
    modulationWheelSlider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    modulationWheelSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);

    modulationWheelSlider->setBounds (56, 151, 85, 75);

    keyboardControl1Slider.reset (new juce::Slider ("keyboard_control1_slider"));
    addAndMakeVisible (keyboardControl1Slider.get());
    keyboardControl1Slider->setRange (0, 10, 0);
    keyboardControl1Slider->setSliderStyle (juce::Slider::LinearHorizontal);
    keyboardControl1Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    keyboardControl1Slider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    keyboardControl1Slider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    keyboardControl1Slider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    keyboardControl1Slider->setBounds (852, 107, 54, 40);

    keyboardControl2Slider.reset (new juce::Slider ("keyboard_control2_slider"));
    addAndMakeVisible (keyboardControl2Slider.get());
    keyboardControl2Slider->setRange (0, 10, 0);
    keyboardControl2Slider->setSliderStyle (juce::Slider::LinearHorizontal);
    keyboardControl2Slider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    keyboardControl2Slider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    keyboardControl2Slider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    keyboardControl2Slider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    keyboardControl2Slider->setBounds (852, 158, 54, 40);

    muteExtInputSlider.reset (new juce::Slider ("mute_ext_input_slider"));
    addAndMakeVisible (muteExtInputSlider.get());
    muteExtInputSlider->setRange (0, 10, 0);
    muteExtInputSlider->setSliderStyle (juce::Slider::LinearHorizontal);
    muteExtInputSlider->setTextBoxStyle (juce::Slider::NoTextBox, false, 80, 20);
    muteExtInputSlider->setColour (juce::Slider::backgroundColourId, juce::Colours::black);
    muteExtInputSlider->setColour (juce::Slider::thumbColourId, juce::Colour (0xfff05b2c));
    muteExtInputSlider->setColour (juce::Slider::trackColourId, juce::Colour (0xd02a2727));

    muteExtInputSlider->setBounds (656, 112, 54, 40);

    saveButton.reset (new juce::TextButton ("Save"));
    addAndMakeVisible (saveButton.get());
    saveButton->addListener (this);
    saveButton->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff4d4d4d));

    saveButton->setBounds (1300, 413, 86, 24);

    loadButton.reset (new juce::TextButton ("Save"));
    addAndMakeVisible (loadButton.get());
    loadButton->setButtonText (TRANS("Load"));
    loadButton->addListener (this);
    loadButton->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff4d4d4d));

    loadButton->setBounds (1204, 413, 86, 24);

    redoButton.reset (new juce::TextButton ("Redo"));
    addAndMakeVisible (redoButton.get());
    redoButton->addListener (this);
    redoButton->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff4d4d4d));

    redoButton->setBounds (1092, 413, 86, 24);

    undoButton.reset (new juce::TextButton ("Undo"));
    addAndMakeVisible (undoButton.get());
    undoButton->addListener (this);
    undoButton->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff4d4d4d));

    undoButton->setBounds (996, 413, 86, 24);

    panicButton.reset (new juce::TextButton ("Panic"));
    addAndMakeVisible (panicButton.get());
    panicButton->addListener (this);
    panicButton->setColour (juce::TextButton::buttonColourId, juce::Colour (0xff4d4d4d));

    panicButton->setBounds (884, 413, 86, 24);

    internalPath1.startNewSubPath (120.0f, 80.0f);
    internalPath1.lineTo (114.0f, 89.0f);
    internalPath1.lineTo (114.0f, 89.0f);
    internalPath1.closeSubPath();

    internalPath2.startNewSubPath (0.0f, static_cast<float> (-212720));
    internalPath2.lineTo (0.0f, static_cast<float> (-212717));
    internalPath2.closeSubPath();

    internalPath3.startNewSubPath (0.0f, static_cast<float> (-212720));
    internalPath3.lineTo (0.0f, static_cast<float> (-212717));
    internalPath3.closeSubPath();

    internalPath4.startNewSubPath (0.0f, static_cast<float> (-212720));
    internalPath4.lineTo (0.0f, static_cast<float> (-212717));
    internalPath4.closeSubPath();

    internalPath5.startNewSubPath (272.0f, 88.0f);
    internalPath5.closeSubPath();

    internalPath6.startNewSubPath (473.0f, 345.0f);
    internalPath6.lineTo (468.0f, 337.0f);
    internalPath6.closeSubPath();

    internalPath7.startNewSubPath (468.0f, 337.0f);
    internalPath7.lineTo (463.0f, 345.0f);
    internalPath7.closeSubPath();

    internalPath8.startNewSubPath (538.0f, 295.0f);
    internalPath8.lineTo (532.0f, 295.0f);
    internalPath8.closeSubPath();

    internalPath9.startNewSubPath (532.0f, 303.0f);
    internalPath9.lineTo (532.0f, 295.0f);
    internalPath9.closeSubPath();

    internalPath10.startNewSubPath (473.0f, 256.0f);
    internalPath10.lineTo (473.0f, 264.0f);
    internalPath10.closeSubPath();

    internalPath11.startNewSubPath (466.0f, 264.0f);
    internalPath11.lineTo (473.0f, 256.0f);
    internalPath11.closeSubPath();

    internalPath12.startNewSubPath (445.0f, 303.0f);
    internalPath12.lineTo (445.0f, 295.0f);
    internalPath12.closeSubPath();

    internalPath13.startNewSubPath (538.0f, 303.0f);
    internalPath13.lineTo (547.0f, 303.0f);
    internalPath13.closeSubPath();

    internalPath14.startNewSubPath (538.0f, 303.0f);
    internalPath14.lineTo (538.0f, 295.0f);
    internalPath14.closeSubPath();

    internalPath15.startNewSubPath (510.0f, 345.0f);
    internalPath15.lineTo (510.0f, 337.0f);
    internalPath15.closeSubPath();

    internalPath16.startNewSubPath (515.0f, 337.0f);
    internalPath16.lineTo (510.0f, 337.0f);
    internalPath16.closeSubPath();

    internalPath17.startNewSubPath (515.0f, 337.0f);
    internalPath17.lineTo (515.0f, 345.0f);
    internalPath17.closeSubPath();

    internalPath18.startNewSubPath (515.0f, 345.0f);
    internalPath18.lineTo (526.0f, 345.0f);
    internalPath18.closeSubPath();

    internalPath19.startNewSubPath (510.0f, 264.0f);
    internalPath19.lineTo (510.0f, 256.0f);
    internalPath19.closeSubPath();

    internalPath20.startNewSubPath (518.0f, 256.0f);
    internalPath20.lineTo (510.0f, 256.0f);
    internalPath20.closeSubPath();

    internalPath21.startNewSubPath (518.0f, 256.0f);
    internalPath21.lineTo (518.0f, 264.0f);
    internalPath21.closeSubPath();

    internalPath22.startNewSubPath (526.0f, 264.0f);
    internalPath22.lineTo (518.0f, 264.0f);
    internalPath22.closeSubPath();

    internalPath23.startNewSubPath (468.0f, 224.0f);
    internalPath23.lineTo (463.0f, 232.0f);
    internalPath23.closeSubPath();

    internalPath24.startNewSubPath (473.0f, 232.0f);
    internalPath24.lineTo (468.0f, 224.0f);
    internalPath24.closeSubPath();

    internalPath25.startNewSubPath (468.0f, 111.0f);
    internalPath25.lineTo (463.0f, 119.0f);
    internalPath25.closeSubPath();

    internalPath26.startNewSubPath (473.0f, 119.0f);
    internalPath26.lineTo (468.0f, 111.0f);
    internalPath26.closeSubPath();

    internalPath27.startNewSubPath (442.0f, 190.0f);
    internalPath27.lineTo (449.0f, 182.0f);
    internalPath27.closeSubPath();

    internalPath28.startNewSubPath (442.0f, 77.0f);
    internalPath28.lineTo (449.0f, 69.0f);
    internalPath28.closeSubPath();

    internalPath29.startNewSubPath (449.0f, 187.0f);
    internalPath29.lineTo (449.0f, 182.0f);
    internalPath29.closeSubPath();

    internalPath30.startNewSubPath (449.0f, 74.0f);
    internalPath30.lineTo (449.0f, 69.0f);
    internalPath30.closeSubPath();

    internalPath31.startNewSubPath (466.0f, 151.0f);
    internalPath31.lineTo (473.0f, 143.0f);
    internalPath31.closeSubPath();

    internalPath32.startNewSubPath (466.0f, 38.0f);
    internalPath32.lineTo (473.0f, 30.0f);
    internalPath32.closeSubPath();

    internalPath33.startNewSubPath (473.0f, 38.0f);
    internalPath33.lineTo (473.0f, 30.0f);
    internalPath33.closeSubPath();

    internalPath34.startNewSubPath (510.0f, 151.0f);
    internalPath34.lineTo (510.0f, 143.0f);
    internalPath34.closeSubPath();

    internalPath35.startNewSubPath (518.0f, 143.0f);
    internalPath35.lineTo (510.0f, 143.0f);
    internalPath35.closeSubPath();

    internalPath36.startNewSubPath (518.0f, 143.0f);
    internalPath36.lineTo (518.0f, 151.0f);
    internalPath36.closeSubPath();

    internalPath37.startNewSubPath (526.0f, 151.0f);
    internalPath37.lineTo (518.0f, 151.0f);
    internalPath37.closeSubPath();

    internalPath38.startNewSubPath (510.0f, 38.0f);
    internalPath38.lineTo (510.0f, 30.0f);
    internalPath38.closeSubPath();

    internalPath39.startNewSubPath (518.0f, 30.0f);
    internalPath39.lineTo (510.0f, 30.0f);
    internalPath39.closeSubPath();

    internalPath40.startNewSubPath (518.0f, 30.0f);
    internalPath40.lineTo (518.0f, 38.0f);
    internalPath40.closeSubPath();

    internalPath41.startNewSubPath (526.0f, 38.0f);
    internalPath41.lineTo (518.0f, 38.0f);
    internalPath41.closeSubPath();

    internalPath42.startNewSubPath (532.0f, 190.0f);
    internalPath42.lineTo (532.0f, 182.0f);
    internalPath42.closeSubPath();

    internalPath43.startNewSubPath (538.0f, 190.0f);
    internalPath43.lineTo (538.0f, 182.0f);
    internalPath43.closeSubPath();

    internalPath44.startNewSubPath (538.0f, 190.0f);
    internalPath44.lineTo (547.0f, 190.0f);
    internalPath44.closeSubPath();

    internalPath45.startNewSubPath (538.0f, 182.0f);
    internalPath45.lineTo (532.0f, 182.0f);
    internalPath45.closeSubPath();

    internalPath46.startNewSubPath (532.0f, 77.0f);
    internalPath46.lineTo (532.0f, 69.0f);
    internalPath46.closeSubPath();

    internalPath47.startNewSubPath (538.0f, 69.0f);
    internalPath47.lineTo (532.0f, 69.0f);
    internalPath47.closeSubPath();

    internalPath48.startNewSubPath (538.0f, 77.0f);
    internalPath48.lineTo (547.0f, 77.0f);
    internalPath48.closeSubPath();

    internalPath49.startNewSubPath (538.0f, 69.0f);
    internalPath49.lineTo (538.0f, 77.0f);
    internalPath49.closeSubPath();

    internalPath50.startNewSubPath (510.0f, 232.0f);
    internalPath50.lineTo (510.0f, 224.0f);
    internalPath50.closeSubPath();

    internalPath51.startNewSubPath (515.0f, 232.0f);
    internalPath51.lineTo (526.0f, 232.0f);
    internalPath51.closeSubPath();

    internalPath52.startNewSubPath (515.0f, 224.0f);
    internalPath52.lineTo (515.0f, 232.0f);
    internalPath52.closeSubPath();

    internalPath53.startNewSubPath (515.0f, 224.0f);
    internalPath53.lineTo (510.0f, 224.0f);
    internalPath53.closeSubPath();

    internalPath54.startNewSubPath (510.0f, 119.0f);
    internalPath54.lineTo (510.0f, 111.0f);
    internalPath54.closeSubPath();

    internalPath55.startNewSubPath (515.0f, 111.0f);
    internalPath55.lineTo (510.0f, 111.0f);
    internalPath55.closeSubPath();

    internalPath56.startNewSubPath (515.0f, 111.0f);
    internalPath56.lineTo (515.0f, 119.0f);
    internalPath56.closeSubPath();

    internalPath57.startNewSubPath (515.0f, 119.0f);
    internalPath57.lineTo (526.0f, 119.0f);
    internalPath57.closeSubPath();

    internalPath58.startNewSubPath (143.0f, 93.0f);
    internalPath58.lineTo (138.0f, 85.0f);
    internalPath58.closeSubPath();

    internalPath59.startNewSubPath (133.0f, 93.0f);
    internalPath59.lineTo (138.0f, 85.0f);
    internalPath59.closeSubPath();

    internalPath60.startNewSubPath (161.0f, 93.0f);
    internalPath60.lineTo (161.0f, 85.0f);
    internalPath60.closeSubPath();

    internalPath61.startNewSubPath (169.0f, 85.0f);
    internalPath61.lineTo (161.0f, 85.0f);
    internalPath61.closeSubPath();

    internalPath62.startNewSubPath (169.0f, 85.0f);
    internalPath62.lineTo (169.0f, 93.0f);
    internalPath62.closeSubPath();

    internalPath63.startNewSubPath (177.0f, 93.0f);
    internalPath63.lineTo (169.0f, 93.0f);
    internalPath63.closeSubPath();

    internalPath64.startNewSubPath (473.0f, 151.0f);
    internalPath64.lineTo (473.0f, 143.0f);
    internalPath64.closeSubPath();

    internalPath65.startNewSubPath (449.0f, 187.0f);
    internalPath65.lineTo (453.0f, 190.0f);
    internalPath65.closeSubPath();

    internalPath66.startNewSubPath (452.0f, 303.0f);
    internalPath66.lineTo (445.0f, 295.0f);
    internalPath66.closeSubPath();

    internalPath67.startNewSubPath (449.0f, 74.0f);
    internalPath67.lineTo (453.0f, 77.0f);
    internalPath67.closeSubPath();


    //[UserPreSize]
    // Oscillatori
    muteOsc1Attachment.reset(new SliderAttachment(valueTreeState, NAME_MUTE_OSC1, *muteOsc1Slider));
    muteOsc2Attachment.reset(new SliderAttachment(valueTreeState, NAME_MUTE_OSC2, *muteOsc2Slider));
    muteOsc3Attachment.reset(new SliderAttachment(valueTreeState, NAME_MUTE_OSC3, *muteOsc3Slider));
    waveformOsc1Attachment.reset(new SliderAttachment(valueTreeState, NAME_WF_OSC1, *waveformOsc1Slider));
    waveformOsc2Attachment.reset(new SliderAttachment(valueTreeState, NAME_WF_OSC2, *waveformOsc2Slider));
    waveformOsc3Attachment.reset(new SliderAttachment(valueTreeState, NAME_WF_OSC3, *waveformOsc3Slider));
    octaveOsc1Attachment.reset(new SliderAttachment(valueTreeState, NAME_OCTAVE_OSC1, *octaveOsc1Slider));
    octaveOsc2Attachment.reset(new SliderAttachment(valueTreeState, NAME_OCTAVE_OSC2, *octaveOsc2Slider));
    octaveOsc3Attachment.reset(new SliderAttachment(valueTreeState, NAME_OCTAVE_OSC3, *octaveOsc3Slider));
    detuneOsc2Attachment.reset(new SliderAttachment(valueTreeState, NAME_DETUNE_OSC2, *detuneOsc2Slider));
    detuneOsc3Attachment.reset(new SliderAttachment(valueTreeState, NAME_DETUNE_OSC3, *detuneOsc3Slider));
    gainOsc1Attachment.reset(new SliderAttachment(valueTreeState, NAME_GAIN_OSC1, *gainOsc1Slider));
    gainOsc2Attachment.reset(new SliderAttachment(valueTreeState, NAME_GAIN_OSC2, *gainOsc2Slider));
    gainOsc3Attachment.reset(new SliderAttachment(valueTreeState, NAME_GAIN_OSC3, *gainOsc3Slider));
    // LFO
    waveformLfoAttachment.reset(new SliderAttachment(valueTreeState, NAME_WF_LFO, *waveformLfoSlider));
    rateLfoAttachment.reset(new SliderAttachment(valueTreeState, NAME_RATE_LFO, *rateLfoSlider));
    // Noise
    muteNoiseAttachment.reset(new SliderAttachment(valueTreeState, NAME_MUTE_NOISE, *muteNoiseSlider));
    gainNoiseAttachment.reset(new SliderAttachment(valueTreeState, NAME_GAIN_NOISE, *gainNoiseSlider));
    typeNoiseAttachment.reset(new SliderAttachment(valueTreeState, NAME_NOISE_TYPE, *typeNoiseSlider));
    // Filter
    cutoffRateFilterAttachment.reset(new SliderAttachment(valueTreeState, NAME_CUTOFF_RATE, *cutoffRateFilterSlider));
    contourFilterAttachment.reset(new SliderAttachment(valueTreeState, NAME_CONTOUR, *contourFilterSlider));
    resonanceFilterAttachment. reset(new SliderAttachment(valueTreeState, NAME_RESONANCE, *resonanceFilterSlider));
    attackFilterAttachment.reset(new SliderAttachment(valueTreeState, NAME_ATTACK_FILTER, *attackFilterSlider));
    decayFilterAttachment.reset(new SliderAttachment(valueTreeState, NAME_DECAY_FILTER, *decayFilterSlider));
    sustainFilterAttachment.reset(new SliderAttachment(valueTreeState, NAME_SUSTAIN_FILTER, *sustainFilterSlider));
    // Loudness ADSR
    attackLoudnessAttachment.reset(new SliderAttachment(valueTreeState, NAME_ATTACK_LOUD, *attackLoudnessSlider));
    decayLoudnessAttachment.reset(new SliderAttachment(valueTreeState, NAME_DECAY_LOUD, *decayLoudnessSlider));
    sustainLoudnessAttachment.reset(new SliderAttachment(valueTreeState, NAME_SUSTAIN_LOUD, *sustainLoudnessSlider));
    // Generic Enablers
    releaseEnablerAttachment.reset(new SliderAttachment(valueTreeState, NAME_RELEASE_ENABLER, *releaseEnablerSlider));
    glideEnablerAttachment.reset(new SliderAttachment(valueTreeState, NAME_GLIDE_ENABLER, *glideEnablerSlider));
    keyboardControl1Attachment.reset(new SliderAttachment(valueTreeState, NAME_KEYBOARD_CONTROL_1, *keyboardControl1Slider));
    keyboardControl2Attachment.reset(new SliderAttachment(valueTreeState, NAME_KEYBOARD_CONTROL_2, *keyboardControl2Slider));
    osc3ControlEnablerAttachment.reset(new SliderAttachment(valueTreeState, NAME_OSC3_CONTROL, *osc3ControlEnablerSlider));
    oscillatorModulationAttachment.reset(new SliderAttachment(valueTreeState, NAME_OSC_MODULATION, *oscModulationEnablerSlider));
    filterModulationAttachment.reset(new SliderAttachment(valueTreeState, NAME_FILTER_MODULATION, *filterModulationEnablerSlider));
    muteExtInputAttachment.reset(new SliderAttachment(valueTreeState, NAME_MUTE_EXT_INPUT, *muteExtInputSlider));
    gainEnablerAttachment.reset(new SliderAttachment(valueTreeState, NAME_GAIN_ENABLER, *gainEnablerSlider));
    // Modulation Parameters
    modSxAttachment.reset(new SliderAttachment(valueTreeState, NAME_MODSX, *modSxSlider));
    modRxAttachment.reset(new SliderAttachment(valueTreeState, NAME_MODRX, *modRxSlider));
    modulationMixAttachment.reset(new SliderAttachment(valueTreeState, NAME_MODULATION_MIX, *modulationMixSlider));
    modulationWheelAttachment.reset(new SliderAttachment(valueTreeState, NAME_MODULATION_WHEEL, *modulationWheelSlider));
    // Generic Controls
    glideRateAttachment.reset(new SliderAttachment(valueTreeState, NAME_GLIDE_RATE, *rateGlideSlider));
    pitchWheelAttachment.reset(new SliderAttachment(valueTreeState, NAME_TUNE_WHEEL, *pitchWheelSlider));
    gainExtInputAttachment.reset(new SliderAttachment(valueTreeState, NAME_GAIN_EXT_INPUT, *gainExtInputSlider));
    gainAttachment.reset(new SliderAttachment(valueTreeState, NAME_GAIN, *gainMoogSlider));

    // Settaggio del look and feel per manopole di range e waveform
    waveformOsc1Slider->setLookAndFeel(&RotarySliderTheme0);
    waveformOsc2Slider->setLookAndFeel(&RotarySliderTheme0);
    waveformOsc3Slider->setLookAndFeel(&RotarySliderTheme0);
    octaveOsc1Slider->setLookAndFeel(&RotarySliderTheme0);
    octaveOsc2Slider->setLookAndFeel(&RotarySliderTheme0);
    octaveOsc3Slider->setLookAndFeel(&RotarySliderTheme0);
    // Settaggio del look and feel per manopole di detune
    detuneOsc2Slider->setLookAndFeel(&RotarySliderTheme2);
    detuneOsc3Slider->setLookAndFeel(&RotarySliderTheme2);
    pitchWheelSlider->setLookAndFeel(&RotarySliderTheme2);
    // Settaggio del look and feel per tutte le altre manopole
    modulationMixSlider->setLookAndFeel(&RotarySliderTheme1);
    gainOsc1Slider->setLookAndFeel(&RotarySliderTheme1);
    gainOsc2Slider->setLookAndFeel(&RotarySliderTheme1);
    gainOsc3Slider->setLookAndFeel(&RotarySliderTheme1);
    gainNoiseSlider->setLookAndFeel(&RotarySliderTheme1);
    gainMoogSlider->setLookAndFeel(&RotarySliderTheme1);
    attackLoudnessSlider->setLookAndFeel(&RotarySliderTheme1);
    decayLoudnessSlider->setLookAndFeel(&RotarySliderTheme1);
    sustainLoudnessSlider->setLookAndFeel(&RotarySliderTheme1);
    attackFilterSlider->setLookAndFeel(&RotarySliderTheme1);
    decayFilterSlider->setLookAndFeel(&RotarySliderTheme1);
    sustainFilterSlider->setLookAndFeel(&RotarySliderTheme1);
    cutoffRateFilterSlider->setLookAndFeel(&RotarySliderTheme1);
    resonanceFilterSlider->setLookAndFeel(&RotarySliderTheme1);
    contourFilterSlider->setLookAndFeel(&RotarySliderTheme1);
    rateGlideSlider->setLookAndFeel(&RotarySliderTheme1);
    rateLfoSlider->setLookAndFeel(&RotarySliderTheme1);
    gainExtInputSlider->setLookAndFeel(&RotarySliderTheme1);
    modulationWheelSlider->setLookAndFeel(&RotarySliderTheme1);

    // Settaggio del look and feel per gli slider lineari
    muteOsc1Slider->setLookAndFeel(&LinearSliderThemeBlue);
    muteOsc2Slider->setLookAndFeel(&LinearSliderThemeBlue);
    muteOsc3Slider->setLookAndFeel(&LinearSliderThemeBlue);
    muteNoiseSlider->setLookAndFeel(&LinearSliderThemeBlue);
    muteExtInputSlider->setLookAndFeel(&LinearSliderThemeBlue);
    oscModulationEnablerSlider->setLookAndFeel(&LinearSliderThemeOrange);
    filterModulationEnablerSlider->setLookAndFeel(&LinearSliderThemeOrange);
    waveformLfoSlider->setLookAndFeel(&LinearSliderThemeBlue);
    glideEnablerSlider->setLookAndFeel(&LinearSliderThemeWhite);
    releaseEnablerSlider->setLookAndFeel(&LinearSliderThemeWhite);
    gainEnablerSlider->setLookAndFeel(&LinearSliderThemeBlack);
    osc3ControlEnablerSlider->setLookAndFeel(&LinearSliderThemeOrange);
    typeNoiseSlider->setLookAndFeel(&LinearSliderThemeBlue);
    modSxSlider->setLookAndFeel(&LinearSliderThemeBlack);
    modRxSlider->setLookAndFeel(&LinearSliderThemeBlack);
    keyboardControl1Slider->setLookAndFeel(&LinearSliderThemeOrange);
    keyboardControl2Slider->setLookAndFeel(&LinearSliderThemeOrange);
    //[/UserPreSize]

    setSize (1400, 450);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MoogEditor::~MoogEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //Devo distruggere prima gli slider attachment dei componenti grafici
    //Prima di distruggere il look and feel devo porlo a null e poi posso distruggere il componente look and feel e tutti i componenti (slider) che usavano quel particolare look and feel
    this->setLookAndFeel(nullptr);
    // Oscillators
    muteOsc1Attachment.reset();
    muteOsc2Attachment.reset();
    muteOsc3Attachment.reset();
    octaveOsc1Attachment.reset();
    octaveOsc2Attachment.reset();
    octaveOsc3Attachment.reset();
    waveformOsc1Attachment.reset();
    waveformOsc2Attachment.reset();
    waveformOsc3Attachment.reset();
    detuneOsc2Attachment.reset();
    detuneOsc3Attachment.reset();
    gainOsc1Attachment.reset();
    gainOsc2Attachment.reset();
    gainOsc3Attachment.reset();
    // LFO
    waveformLfoAttachment.reset();
    rateLfoAttachment.reset();
    // Noise
    muteNoiseAttachment.reset();
    gainNoiseAttachment.reset();
    typeNoiseAttachment.reset();
    // Filter
    cutoffRateFilterAttachment.reset();
    contourFilterAttachment.reset();
    resonanceFilterAttachment.reset();
    attackFilterAttachment.reset();
    decayFilterAttachment.reset();
    sustainFilterAttachment.reset();
    // Loudness ADSR
    attackLoudnessAttachment.reset();
    decayLoudnessAttachment.reset();
    sustainLoudnessAttachment.reset();
    // Generic Enablers
    releaseEnablerAttachment.reset();
    glideEnablerAttachment.reset();
    keyboardControl1Attachment.reset();
    keyboardControl2Attachment.reset();
    osc3ControlEnablerAttachment.reset();
    oscillatorModulationAttachment.reset();
    filterModulationAttachment.reset();
    muteExtInputAttachment.reset();
    gainEnablerAttachment.reset();
    // Modulation parameters
    modSxAttachment.reset();
    modRxAttachment.reset();
    modulationMixAttachment.reset();
    modulationWheelAttachment.reset();
    // Generic Controls
    pitchWheelAttachment.reset();
    glideRateAttachment.reset();
    gainExtInputAttachment.reset();
    gainAttachment.reset();
    //[/Destructor_pre]

    octaveOsc1Slider = nullptr;
    waveformOsc1Slider = nullptr;
    waveformOsc2Slider = nullptr;
    octaveOsc3Slider = nullptr;
    detuneOsc2Slider = nullptr;
    octaveOsc2Slider = nullptr;
    detuneOsc3Slider = nullptr;
    waveformOsc3Slider = nullptr;
    gainOsc1Slider = nullptr;
    gainOsc2Slider = nullptr;
    gainOsc3Slider = nullptr;
    muteOsc1Slider = nullptr;
    muteOsc2Slider = nullptr;
    muteOsc3Slider = nullptr;
    muteNoiseSlider = nullptr;
    gainNoiseSlider = nullptr;
    attackLoudnessSlider = nullptr;
    decayLoudnessSlider = nullptr;
    sustainLoudnessSlider = nullptr;
    attackFilterSlider = nullptr;
    decayFilterSlider = nullptr;
    contourFilterSlider = nullptr;
    resonanceFilterSlider = nullptr;
    cutoffRateFilterSlider = nullptr;
    sustainFilterSlider = nullptr;
    filterModulationEnablerSlider = nullptr;
    rateGlideSlider = nullptr;
    oscModulationEnablerSlider = nullptr;
    rateLfoSlider = nullptr;
    waveformLfoSlider = nullptr;
    glideEnablerSlider = nullptr;
    releaseEnablerSlider = nullptr;
    typeNoiseSlider = nullptr;
    gainMoogSlider = nullptr;
    gainEnablerSlider = nullptr;
    osc3ControlEnablerSlider = nullptr;
    modulationMixSlider = nullptr;
    modRxSlider = nullptr;
    modSxSlider = nullptr;
    pitchWheelSlider = nullptr;
    gainExtInputSlider = nullptr;
    modulationWheelSlider = nullptr;
    keyboardControl1Slider = nullptr;
    keyboardControl2Slider = nullptr;
    muteExtInputSlider = nullptr;
    saveButton = nullptr;
    loadButton = nullptr;
    redoButton = nullptr;
    undoButton = nullptr;
    panicButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MoogEditor::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    Colour brightColour = Colour(0xff2b2d31);
    Colour darkColour = Colour(0xff0d0d11);
    g.setGradientFill(ColourGradient(brightColour, 0, 0, darkColour.brighter(0.05f), 1280, 352, false));
    //[/UserPrePaint]

    g.fillAll (juce::Colours::white);

    {
        int x = -96, y = -8, width = 1520, height = 424;
        juce::Colour fillColour1 = juce::Colour (0xff4a4040), fillColour2 = juce::Colour (0xff423232);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (juce::ColourGradient (fillColour1,
                                             592.0f - static_cast<float> (-96) + x,
                                             64.0f - static_cast<float> (-8) + y,
                                             fillColour2,
                                             592.0f - static_cast<float> (-96) + x,
                                             232.0f - static_cast<float> (-8) + y,
                                             false));
        g.fillRect (x, y, width, height);
    }

    {
        int x = 340, y = 18, width = 96, height = 16;
        juce::String text (TRANS("OSCILLATOR-1"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (14.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 352, y = 32, width = 67, height = 14;
        juce::String text (TRANS("FREQUENCY"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 340, y = 122, width = 97, height = 16;
        juce::String text (TRANS("OSCILLATOR-2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (14.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 340, y = 235, width = 96, height = 16;
        juce::String text (TRANS("OSCILLATOR-3"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (14.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 253, y = 356, width = 234, height = 24;
        juce::String text (TRANS("OSCILLATOR  BANK"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (27.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 262, y = 16, width = 35, height = 14;
        juce::String text (TRANS("RANGE"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 462, y = 16, width = 59, height = 14;
        juce::String text (TRANS("WAVEFORM"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 550, y = 0, width = 1, height = 400;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 1240, y = 0, width = 1, height = 400;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 198, y = 136, width = 1, height = 264;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 880, y = 181, width = 1, height = 219;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 14, y = 356, width = 171, height = 24;
        juce::String text (TRANS("CONTROLLERS"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (27.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 675, y = 356, width = 72, height = 24;
        juce::String text (TRANS("MIXER"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (27.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 994, y = 356, width = 132, height = 24;
        juce::String text (TRANS("MODIFIER"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (27.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1270, y = 356, width = 100, height = 24;
        juce::String text (TRANS("OUTPUT"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (27.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 880, y = 230, width = 360, height = 1;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 980, y = 230, width = 160, height = 16;
        juce::String text (TRANS("LOUDNESS CONTOUR"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 579, y = 16, width = 59, height = 14;
        juce::String text (TRANS("VOLUME"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 718, y = 65, width = 80, height = 14;
        juce::String text (TRANS("EXTERNAL"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 926, y = 242, width = 72, height = 14;
        juce::String text (TRANS("ATTACK TIME"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1136, y = 242, width = 80, height = 14;
        juce::String text (TRANS("SUSTAIN LEVEL"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1038, y = 242, width = 64, height = 14;
        juce::String text (TRANS("DECAY TIME"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1045, y = 8, width = 49, height = 16;
        juce::String text (TRANS("FILTER"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (13.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 910, y = 16, width = 104, height = 14;
        juce::String text (TRANS("CUTOFF FREQUENCY"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1042, y = 20, width = 56, height = 14;
        juce::String text (TRANS("EMPHASIS"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1142, y = 16, width = 70, height = 20;
        juce::String text (TRANS("OF CONTOUR"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1152, y = 9, width = 48, height = 14;
        juce::String text (TRANS("AMOUNT"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 926, y = 120, width = 72, height = 14;
        juce::String text (TRANS("ATTACK TIME"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1136, y = 120, width = 80, height = 14;
        juce::String text (TRANS("SUSTAIN LEVEL"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1038, y = 120, width = 64, height = 14;
        juce::String text (TRANS("DECAY TIME"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1302, y = 120, width = 35, height = 14;
        juce::String text (TRANS("GLIDE"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 166, y = 102, width = 63, height = 17;
        juce::String text (TRANS("OSCILLATOR "));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 166, y = 110, width = 63, height = 17;
        juce::String text (TRANS("MODULATION"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 206, y = 136, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 692, y = 191, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 888, y = 78, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 692, y = 136, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 692, y = 303, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 692, y = 247, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 198, y = 0, width = 1, height = 106;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 200, y = 264, width = 48, height = 18;
        juce::String text (TRANS("CONTROL"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 200, y = 256, width = 31, height = 17;
        juce::String text (TRANS("OSC.3"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 812, y = 207, width = 39, height = 17;
        juce::String text (TRANS("WHITE"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 812, y = 268, width = 39, height = 17;
        juce::String text (TRANS("PINK"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1375, y = 183, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 848, y = 52, width = 63, height = 17;
        juce::String text (TRANS("MODULATION"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 848, y = 44, width = 63, height = 17;
        juce::String text (TRANS("FILTER"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 880, y = 0, width = 1, height = 48;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 86, y = 16, width = 27, height = 14;
        juce::String text (TRANS("LFO"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 46, y = 233, width = 107, height = 14;
        juce::String text (TRANS("MODULATION TYPE"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1375, y = 307, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1186, y = 377, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1153, y = 354, width = 46, height = 12;
        juce::String text (TRANS("RELEASE "));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath1, juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath2, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath2, juce::PathStrokeType (1.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath3, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath3, juce::PathStrokeType (1.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath4, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath4, juce::PathStrokeType (1.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath5, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath5, juce::PathStrokeType (1.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        int x = 386, y = 250, width = 2, height = 16;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 386, y = 137, width = 2, height = 16;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 1290, y = 244, width = 59, height = 14;
        juce::String text (TRANS("VOLUME"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1041, y = 107, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1024, y = 70, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1046, y = 36, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1085, y = 36, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1107, y = 70, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1086, y = 107, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1284, y = 12, width = 72, height = 14;
        juce::String text (TRANS("TUNE"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 115, y = 280, width = 31, height = 9;
        juce::String text (TRANS("OSC.3"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 149, y = 280, width = 48, height = 9;
        juce::String text (TRANS("FILTER EG"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 115, y = 320, width = 32, height = 9;
        juce::String text (TRANS("NOISE"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 160, y = 320, width = 24, height = 9;
        juce::String text (TRANS("LFO"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 5, y = 328, width = 43, height = 6;
        juce::String text (TRANS("OSC.3 /"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centredLeft, true);
    }

    {
        int x = 68, y = 328, width = 41, height = 6;
        juce::String text (TRANS("NOISE /"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centredLeft, true);
    }

    {
        int x = 5, y = 334, width = 48, height = 9;
        juce::String text (TRANS("FILTER EG"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 68, y = 334, width = 24, height = 9;
        juce::String text (TRANS("LFO"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centredLeft, true);
    }

    {
        int x = 692, y = 79, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 243, y = 334, width = 16, height = 6;
        juce::String text (TRANS("LO"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 226, y = 296, width = 15, height = 6;
        juce::String text (TRANS("32\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 250, y = 260, width = 17, height = 6;
        juce::String text (TRANS("16\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 297, y = 260, width = 9, height = 6;
        juce::String text (TRANS("8\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 318, y = 296, width = 12, height = 6;
        juce::String text (TRANS("4\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 342, y = 325, width = 10, height = 6;
        juce::String text (TRANS("-7"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 422, y = 270, width = 8, height = 6;
        juce::String text (TRANS("3"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 399, y = 253, width = 8, height = 6;
        juce::String text (TRANS("1"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 364, y = 253, width = 11, height = 6;
        juce::String text (TRANS("-1"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 342, y = 270, width = 11, height = 6;
        juce::String text (TRANS("-3"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 334, y = 298, width = 11, height = 6;
        juce::String text (TRANS("-5"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 429, y = 298, width = 8, height = 6;
        juce::String text (TRANS("5"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 422, y = 325, width = 8, height = 6;
        juce::String text (TRANS("7"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 959, y = 31, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 920, y = 48, width = 10, height = 6;
        juce::String text (TRANS("-2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centredRight, true);
    }

    {
        int x = 918, y = 91, width = 10, height = 6;
        juce::String text (TRANS("-4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centredRight, true);
    }

    {
        int x = 993, y = 48, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 995, y = 91, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath6, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath6, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath7, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath7, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath8, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath8, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath9, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath9, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath10, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath10, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath11, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath11, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        int x = 1025, y = 211, width = 32, height = 6;
        juce::String text (TRANS("M-SEC."));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1087, y = 211, width = 21, height = 6;
        juce::String text (TRANS("SEC."));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1060, y = 133, width = 20, height = 6;
        juce::String text (TRANS("450"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1024, y = 150, width = 14, height = 6;
        juce::String text (TRANS("50"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centredRight, true);
    }

    {
        int x = 1018, y = 191, width = 18, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1101, y = 150, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1104, y = 191, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 300, y = 334, width = 14, height = 6;
        juce::String text (TRANS("2\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath12, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath12, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath13, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath13, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath14, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath14, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath15, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath15, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath16, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath16, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath17, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath17, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath18, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath18, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath19, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath19, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath20, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath20, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath21, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath21, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath22, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath22, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        int x = 243, y = 221, width = 16, height = 6;
        juce::String text (TRANS("LO"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 226, y = 183, width = 15, height = 6;
        juce::String text (TRANS("32\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 250, y = 147, width = 17, height = 6;
        juce::String text (TRANS("16\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 297, y = 147, width = 9, height = 6;
        juce::String text (TRANS("8\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 318, y = 183, width = 12, height = 6;
        juce::String text (TRANS("4\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 300, y = 221, width = 14, height = 6;
        juce::String text (TRANS("2\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 243, y = 108, width = 16, height = 6;
        juce::String text (TRANS("LO"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 226, y = 70, width = 15, height = 6;
        juce::String text (TRANS("32\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 250, y = 34, width = 17, height = 6;
        juce::String text (TRANS("16\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 297, y = 34, width = 9, height = 6;
        juce::String text (TRANS("8\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 318, y = 70, width = 12, height = 6;
        juce::String text (TRANS("4\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 300, y = 108, width = 14, height = 6;
        juce::String text (TRANS("2\'"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 342, y = 212, width = 10, height = 6;
        juce::String text (TRANS("-7"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 422, y = 157, width = 8, height = 6;
        juce::String text (TRANS("3"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 399, y = 140, width = 8, height = 6;
        juce::String text (TRANS("1"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 364, y = 140, width = 11, height = 6;
        juce::String text (TRANS("-1"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 342, y = 157, width = 11, height = 6;
        juce::String text (TRANS("-3"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 334, y = 185, width = 11, height = 6;
        juce::String text (TRANS("-5"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 429, y = 185, width = 8, height = 6;
        juce::String text (TRANS("5"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 422, y = 212, width = 8, height = 6;
        juce::String text (TRANS("7"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 880, y = 79, width = 1, height = 45;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 717, y = 188, width = 80, height = 14;
        juce::String text (TRANS("NOISE VOLUME"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 718, y = 74, width = 80, height = 14;
        juce::String text (TRANS("INPUT VOLUME"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 918, y = 211, width = 32, height = 6;
        juce::String text (TRANS("M-SEC."));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 980, y = 211, width = 21, height = 6;
        juce::String text (TRANS("SEC."));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 952, y = 133, width = 19, height = 6;
        juce::String text (TRANS("450"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 912, y = 150, width = 19, height = 6;
        juce::String text (TRANS("50"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centredRight, true);
    }

    {
        int x = 913, y = 191, width = 15, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 994, y = 150, width = 7, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 997, y = 191, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 918, y = 335, width = 32, height = 6;
        juce::String text (TRANS("M-SEC."));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 980, y = 335, width = 21, height = 6;
        juce::String text (TRANS("SEC."));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 952, y = 257, width = 19, height = 6;
        juce::String text (TRANS("450"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 912, y = 274, width = 19, height = 6;
        juce::String text (TRANS("50"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centredRight, true);
    }

    {
        int x = 913, y = 315, width = 15, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 994, y = 274, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 997, y = 315, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1025, y = 335, width = 32, height = 6;
        juce::String text (TRANS("M-SEC."));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1087, y = 335, width = 21, height = 6;
        juce::String text (TRANS("SEC."));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1059, y = 257, width = 22, height = 6;
        juce::String text (TRANS("450"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1024, y = 274, width = 14, height = 6;
        juce::String text (TRANS("50"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centredRight, true);
    }

    {
        int x = 1018, y = 315, width = 18, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1101, y = 274, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1104, y = 315, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1148, y = 107, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1131, y = 70, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1153, y = 36, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1192, y = 36, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1214, y = 70, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1193, y = 107, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1148, y = 209, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1131, y = 172, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1153, y = 138, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1192, y = 138, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1214, y = 172, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1193, y = 209, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1148, y = 333, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1131, y = 296, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1153, y = 262, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1192, y = 262, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1214, y = 296, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1193, y = 333, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1481, y = 313, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1261, y = 209, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1244, y = 172, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1266, y = 138, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1305, y = 138, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1327, y = 172, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1306, y = 209, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1481, y = 437, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1261, y = 333, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1244, y = 296, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1266, y = 262, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1305, y = 262, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1327, y = 296, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1306, y = 333, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1270, y = 58, width = 10, height = 6;
        juce::String text (TRANS("-6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1339, y = 112, width = 14, height = 6;
        juce::String text (TRANS("12"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1345, y = 35, width = 8, height = 6;
        juce::String text (TRANS("3"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1285, y = 35, width = 11, height = 6;
        juce::String text (TRANS("-3"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1280, y = 112, width = 22, height = 6;
        juce::String text (TRANS("-12"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1270, y = 86, width = 11, height = 6;
        juce::String text (TRANS("-9"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1360, y = 86, width = 8, height = 6;
        juce::String text (TRANS("9"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1360, y = 58, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 888, y = 180, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 888, y = 130, width = 16, height = 17;
        juce::String text (TRANS("ON"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 580, y = 333, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 563, y = 296, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 585, y = 262, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 624, y = 262, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 646, y = 296, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 625, y = 333, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 580, y = 220, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 563, y = 183, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 585, y = 149, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 624, y = 149, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 646, y = 183, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 625, y = 220, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 729, y = 163, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 712, y = 126, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 734, y = 92, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 773, y = 92, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 795, y = 126, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 774, y = 163, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 580, y = 107, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 563, y = 70, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 585, y = 36, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 624, y = 36, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 646, y = 70, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 625, y = 107, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 729, y = 276, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 712, y = 239, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 734, y = 205, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 773, y = 205, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 795, y = 239, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 774, y = 276, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 848, y = 154, width = 63, height = 17;
        juce::String text (TRANS("CONTROL"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 848, y = 146, width = 63, height = 17;
        juce::String text (TRANS("KEYBOARD"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 880, y = 130, width = 1, height = 20;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 38, y = 131, width = 123, height = 14;
        juce::String text (TRANS("MODULATION AMOUNT"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 33, y = 107, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 16, y = 70, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 38, y = 36, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 77, y = 36, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 99, y = 70, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 78, y = 107, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 70, y = 220, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 53, y = 183, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 75, y = 149, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 114, y = 149, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 136, y = 183, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 115, y = 220, width = 16, height = 6;
        juce::String text (TRANS("10"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 16, y = 285, width = 8, height = 6;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 38, y = 251, width = 8, height = 6;
        juce::String text (TRANS("4"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 77, y = 251, width = 8, height = 6;
        juce::String text (TRANS("6"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 99, y = 285, width = 8, height = 6;
        juce::String text (TRANS("8"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath23, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath23, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath24, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath24, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath25, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath25, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath26, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath26, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath27, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath27, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath28, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath28, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath29, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath29, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath30, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath30, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath31, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath31, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath32, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath32, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath33, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath33, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath34, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath34, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath35, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath35, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath36, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath36, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath37, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath37, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath38, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath38, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath39, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath39, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath40, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath40, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath41, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath41, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath42, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath42, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath43, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath43, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath44, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath44, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath45, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath45, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath46, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath46, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath47, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath47, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath48, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath48, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath49, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath49, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath50, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath50, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath51, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath51, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath52, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath52, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath53, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath53, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath54, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath54, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath55, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath55, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath56, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath56, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath57, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath57, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath58, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath58, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath59, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath59, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath60, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath60, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath61, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath61, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath62, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath62, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath63, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath63, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath64, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath64, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath65, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath65, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath66, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath66, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colours::black;
        juce::Colour strokeColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath67, juce::AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath67, juce::PathStrokeType (2.000f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded), juce::AffineTransform::translation(x, y));
    }

    {
        int x = 845, y = 120, width = 11, height = 14;
        juce::String text (TRANS("1"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 845, y = 171, width = 11, height = 14;
        juce::String text (TRANS("2"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 1316, y = 25, width = 8, height = 6;
        juce::String text (TRANS("0"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (11.00f, juce::Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 0, y = 400, width = 1400, height = 1;
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 0, y = 401, width = 1400, height = 50;
        juce::Colour fillColour1 = juce::Colour (0xff0e0e0e), fillColour2 = juce::Colour (0xff202020);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (juce::ColourGradient (fillColour1,
                                             static_cast<float> (proportionOfWidth (0.4857f)) - 0.0f + x,
                                             static_cast<float> (proportionOfHeight (0.9956f)) - 401.0f + y,
                                             fillColour2,
                                             static_cast<float> (proportionOfWidth (0.4857f)) - 0.0f + x,
                                             static_cast<float> (proportionOfHeight (0.9067f)) - 401.0f + y,
                                             false));
        g.fillRect (x, y, width, height);
    }

    {
        int x = 8, y = 405, width = 184, height = 26;
        juce::String text (TRANS("MiniMOOD"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (27.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::topLeft, true);
    }

    {
        int x = 10, y = 432, width = 462, height = 11;
        juce::String text (TRANS("Coded at Laboratorio di Informatica Musicale by Davide Bianchi & Giorgio Presti :: V1.1"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (10.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::topLeft, true);
    }

    //[UserPaint] Add your own custom painting code here..
    //
    //[/UserPaint]
}

void MoogEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MoogEditor::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == saveButton.get())
    {
        //[UserButtonCode_saveButton] -- add your button handler code here..
        //auto defaultPresetLocation = File::getSpecialLocation(File::SpecialLocationType::commonDocumentsDirectory);
        juce::FileChooser chooser("Select save position...", processor.defaultPresetLocation, "*.xml");

        if (chooser.browseForFileToSave(true))
        {
            auto file = chooser.getResult();

            processor.defaultPresetLocation = file.getParentDirectory();

            if (file.exists())
                file.deleteFile();

            juce::FileOutputStream outputStream(file);

            if (outputStream.openedOk())
            {
                MemoryBlock destData;
                processor.getStateInformation(destData);
                outputStream.write(destData.getData(), destData.getSize());
            }
        }
        //[/UserButtonCode_saveButton]
    }
    else if (buttonThatWasClicked == loadButton.get())
    {
        //[UserButtonCode_loadButton] -- add your button handler code here..
        //auto defaultPresetLocation = File::getSpecialLocation(File::SpecialLocationType::commonDocumentsDirectory);
        juce::FileChooser chooser("Select preset to load...", processor.defaultPresetLocation, "*.xml");

        if (chooser.browseForFileToOpen())
        {
            auto fileToLoad = chooser.getResult();
            processor.defaultPresetLocation = fileToLoad.getParentDirectory();
            MemoryBlock sourceData;
            fileToLoad.loadFileAsData(sourceData);
            processor.setStateInformation(sourceData.getData(), sourceData.getSize());
        }
        //[/UserButtonCode_loadButton]
    }
    else if (buttonThatWasClicked == redoButton.get())
    {
        //[UserButtonCode_redoButton] -- add your button handler code here..
        valueTreeState.undoManager->redo();
        //[/UserButtonCode_redoButton]
    }
    else if (buttonThatWasClicked == undoButton.get())
    {
        //[UserButtonCode_undoButton] -- add your button handler code here..
        valueTreeState.undoManager->undo();
        //[/UserButtonCode_undoButton]
    }
    else if (buttonThatWasClicked == panicButton.get())
    {
        //[UserButtonCode_panicButton] -- add your button handler code here..
        processor.panic();
        //[/UserButtonCode_panicButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MoogEditor" componentName=""
                 parentClasses="public juce::AudioProcessorEditor" constructorParams="MoogAudioProcessor&amp; p, AudioProcessorValueTreeState&amp; vts"
                 variableInitialisers="AudioProcessorEditor(&amp;p), processor(p), valueTreeState(vts)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="1400" initialHeight="450">
  <BACKGROUND backgroundColour="ffffffff">
    <RECT pos="-96 -8 1520 424" fill="linear: 592 64, 592 232, 0=ff4a4040, 1=ff423232"
          hasStroke="0"/>
    <TEXT pos="339.5 18 96 16" fill="solid: ffffffff" hasStroke="0" text="OSCILLATOR-1"
          fontname="Default font" fontsize="14.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="352.5 32 67 14" fill="solid: ffffffff" hasStroke="0" text="FREQUENCY"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="339.5 122 97 16" fill="solid: ffffffff" hasStroke="0" text="OSCILLATOR-2"
          fontname="Default font" fontsize="14.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="339.5 235 96 16" fill="solid: ffffffff" hasStroke="0" text="OSCILLATOR-3"
          fontname="Default font" fontsize="14.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="253 356 234 24" fill="solid: ffffffff" hasStroke="0" text="OSCILLATOR  BANK"
          fontname="Default font" fontsize="27.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="262 16 35 14" fill="solid: ffffffff" hasStroke="0" text="RANGE"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="462 16 59 14" fill="solid: ffffffff" hasStroke="0" text="WAVEFORM"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <RECT pos="550 0 1 400" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="1240 0 1 400" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="198 136 1 264" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="880 181 1 219" fill="solid: ffffffff" hasStroke="0"/>
    <TEXT pos="13.5 356 171 24" fill="solid: ffffffff" hasStroke="0" text="CONTROLLERS"
          fontname="Default font" fontsize="27.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="675 356 72 24" fill="solid: ffffffff" hasStroke="0" text="MIXER"
          fontname="Default font" fontsize="27.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="994 356 132 24" fill="solid: ffffffff" hasStroke="0" text="MODIFIER"
          fontname="Default font" fontsize="27.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <TEXT pos="1270 356 100 24" fill="solid: ffffffff" hasStroke="0" text="OUTPUT"
          fontname="Default font" fontsize="27.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <RECT pos="880 230 360 1" fill="solid: ffffffff" hasStroke="0"/>
    <TEXT pos="980 230 160 16" fill="solid: ffffffff" hasStroke="0" text="LOUDNESS CONTOUR"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="579 16 59 14" fill="solid: ffffffff" hasStroke="0" text="VOLUME"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="717.5 65 80 14" fill="solid: ffffffff" hasStroke="0" text="EXTERNAL"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="926.5 242 72 14" fill="solid: ffffffff" hasStroke="0" text="ATTACK TIME"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1136.5 242 80 14" fill="solid: ffffffff" hasStroke="0" text="SUSTAIN LEVEL"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1038.5 242 64 14" fill="solid: ffffffff" hasStroke="0" text="DECAY TIME"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1045 8 49 16" fill="solid: ffffffff" hasStroke="0" text="FILTER"
          fontname="Default font" fontsize="13.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="910.5 16 104 14" fill="solid: ffffffff" hasStroke="0" text="CUTOFF FREQUENCY"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1042.5 20 56 14" fill="solid: ffffffff" hasStroke="0" text="EMPHASIS"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1141.5 16 70 20" fill="solid: ffffffff" hasStroke="0" text="OF CONTOUR"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1152.5 9 48 14" fill="solid: ffffffff" hasStroke="0" text="AMOUNT"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="926.5 120 72 14" fill="solid: ffffffff" hasStroke="0" text="ATTACK TIME"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1136.5 120 80 14" fill="solid: ffffffff" hasStroke="0" text="SUSTAIN LEVEL"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1038.5 120 64 14" fill="solid: ffffffff" hasStroke="0" text="DECAY TIME"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1302.5 120 35 14" fill="solid: ffffffff" hasStroke="0" text="GLIDE"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="166.5 101.5 63 17" fill="solid: ffffffff" hasStroke="0"
          text="OSCILLATOR " fontname="Default font" fontsize="10.0" kerning="0.0"
          bold="1" italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="166.5 109.5 63 17" fill="solid: ffffffff" hasStroke="0"
          text="MODULATION" fontname="Default font" fontsize="10.0" kerning="0.0"
          bold="1" italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="206 136 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="692 191 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="888 78.5 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="692 135.5 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="692 303 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="692 247 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <RECT pos="198 0 1 105.5" fill="solid: ffffffff" hasStroke="0"/>
    <TEXT pos="200 264 48 18" fill="solid: ffffffff" hasStroke="0" text="CONTROL"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="200 256 31 17" fill="solid: ffffffff" hasStroke="0" text="OSC.3"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="812.5 207 39 17" fill="solid: ffffffff" hasStroke="0" text="WHITE"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="812.5 268 39 17" fill="solid: ffffffff" hasStroke="0" text="PINK"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1375 183 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="848.5 52 63 17" fill="solid: ffffffff" hasStroke="0" text="MODULATION"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="848.5 44 63 17" fill="solid: ffffffff" hasStroke="0" text="FILTER"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <RECT pos="880 0 1 48" fill="solid: ffffffff" hasStroke="0"/>
    <TEXT pos="85.5 16 27 14" fill="solid: ffffffff" hasStroke="0" text="LFO"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="45.5 233 107 14" fill="solid: ffffffff" hasStroke="0" text="MODULATION TYPE"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1375 307 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1186 377 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1153 354 46 12" fill="solid: ffffffff" hasStroke="0" text="RELEASE "
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <PATH pos="1099 0 100 100" fill="solid: ffffffff" hasStroke="0" nonZeroWinding="1">s 120 80 l 114 89 l 114 89 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="1, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 0 -212720 l 0 -212717 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="1, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 0 -212720 l 0 -212717 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="1, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 0 -212720 l 0 -212717 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="1, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 272 88 x</PATH>
    <RECT pos="386 250 2 16" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="386 137 2 16" fill="solid: ffffffff" hasStroke="0"/>
    <TEXT pos="1290.5 244 59 14" fill="solid: ffffffff" hasStroke="0" text="VOLUME"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1041 107 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1024 70 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1046 36 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1085 36 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1107 70 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1086 107 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1284 12 72 14" fill="solid: ffffffff" hasStroke="0" text="TUNE"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="115 280 31 9" fill="solid: ffffffff" hasStroke="0" text="OSC.3"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="149 280 48 9" fill="solid: ffffffff" hasStroke="0" text="FILTER EG"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="115 320 32 9" fill="solid: ffffffff" hasStroke="0" text="NOISE"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="160 320 24 9" fill="solid: ffffffff" hasStroke="0" text="LFO"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="5 328 43 6" fill="solid: ffffffff" hasStroke="0" text="OSC.3 /"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="33" typefaceStyle="Bold"/>
    <TEXT pos="68 328 41 6" fill="solid: ffffffff" hasStroke="0" text="NOISE /"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="33" typefaceStyle="Bold"/>
    <TEXT pos="5 334 48 9" fill="solid: ffffffff" hasStroke="0" text="FILTER EG"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="68 334 24 9" fill="solid: ffffffff" hasStroke="0" text="LFO"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="33" typefaceStyle="Bold"/>
    <TEXT pos="692 79 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="243 334 16 6" fill="solid: ffffffff" hasStroke="0" text="LO"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="226 296 15 6" fill="solid: ffffffff" hasStroke="0" text="32'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="250 260 17 6" fill="solid: ffffffff" hasStroke="0" text="16'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="297 260 9 6" fill="solid: ffffffff" hasStroke="0" text="8'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="318 296 12 6" fill="solid: ffffffff" hasStroke="0" text="4'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="342 325 10 6" fill="solid: ffffffff" hasStroke="0" text="-7"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="422 270 8 6" fill="solid: ffffffff" hasStroke="0" text="3"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="399 253 8 6" fill="solid: ffffffff" hasStroke="0" text="1"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="364 253 11 6" fill="solid: ffffffff" hasStroke="0" text="-1"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="342 270 11 6" fill="solid: ffffffff" hasStroke="0" text="-3"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="334 298 11 6" fill="solid: ffffffff" hasStroke="0" text="-5"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="429 298 8 6" fill="solid: ffffffff" hasStroke="0" text="5"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="422 325 8 6" fill="solid: ffffffff" hasStroke="0" text="7"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="959 31 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="920 48 10 6" fill="solid: ffffffff" hasStroke="0" text="-2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="34" typefaceStyle="Bold"/>
    <TEXT pos="918 91 10 6" fill="solid: ffffffff" hasStroke="0" text="-4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="34" typefaceStyle="Bold"/>
    <TEXT pos="993 48 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="995 91 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 473 345 l 468 337 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 468 337 l 463 345 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 538 295 l 532 295 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 532 303 l 532 295 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 473 256 l 473 264 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 466 264 l 473 256 x</PATH>
    <TEXT pos="1025 211 32 6" fill="solid: ffffffff" hasStroke="0" text="M-SEC."
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1087 211 21 6" fill="solid: ffffffff" hasStroke="0" text="SEC."
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1060 133 20 6" fill="solid: ffffffff" hasStroke="0" text="450"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1024 150 14 6" fill="solid: ffffffff" hasStroke="0" text="50"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="34" typefaceStyle="Bold"/>
    <TEXT pos="1018 191 18 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1101 150 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1104 191 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="300 334 14 6" fill="solid: ffffffff" hasStroke="0" text="2'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 445 303 l 445 295 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 538 303 l 547 303 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 538 303 l 538 295 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 510 345 l 510 337 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 515 337 l 510 337 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 515 337 l 515 345 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 515 345 l 526 345 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 510 264 l 510 256 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 518 256 l 510 256 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 518 256 l 518 264 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 526 264 l 518 264 x</PATH>
    <TEXT pos="243 221 16 6" fill="solid: ffffffff" hasStroke="0" text="LO"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="226 183 15 6" fill="solid: ffffffff" hasStroke="0" text="32'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="250 147 17 6" fill="solid: ffffffff" hasStroke="0" text="16'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="297 147 9 6" fill="solid: ffffffff" hasStroke="0" text="8'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="318 183 12 6" fill="solid: ffffffff" hasStroke="0" text="4'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="300 221 14 6" fill="solid: ffffffff" hasStroke="0" text="2'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="243 108 16 6" fill="solid: ffffffff" hasStroke="0" text="LO"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="226 70 15 6" fill="solid: ffffffff" hasStroke="0" text="32'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="250 34 17 6" fill="solid: ffffffff" hasStroke="0" text="16'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="297 34 9 6" fill="solid: ffffffff" hasStroke="0" text="8'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="318 70 12 6" fill="solid: ffffffff" hasStroke="0" text="4'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="300 108 14 6" fill="solid: ffffffff" hasStroke="0" text="2'"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="342 212 10 6" fill="solid: ffffffff" hasStroke="0" text="-7"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="422 157 8 6" fill="solid: ffffffff" hasStroke="0" text="3"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="399 140 8 6" fill="solid: ffffffff" hasStroke="0" text="1"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="364 140 11 6" fill="solid: ffffffff" hasStroke="0" text="-1"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="342 157 11 6" fill="solid: ffffffff" hasStroke="0" text="-3"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="334 185 11 6" fill="solid: ffffffff" hasStroke="0" text="-5"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="429 185 8 6" fill="solid: ffffffff" hasStroke="0" text="5"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="422 212 8 6" fill="solid: ffffffff" hasStroke="0" text="7"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <RECT pos="880 79 1 45" fill="solid: ffffffff" hasStroke="0"/>
    <TEXT pos="717.15 188 80 14" fill="solid: ffffffff" hasStroke="0" text="NOISE VOLUME"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="717.5 74 80 14" fill="solid: ffffffff" hasStroke="0" text="INPUT VOLUME"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="918 211 32 6" fill="solid: ffffffff" hasStroke="0" text="M-SEC."
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="980 211 21 6" fill="solid: ffffffff" hasStroke="0" text="SEC."
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="952 133 19 6" fill="solid: ffffffff" hasStroke="0" text="450"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="912 150 19 6" fill="solid: ffffffff" hasStroke="0" text="50"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="34" typefaceStyle="Bold"/>
    <TEXT pos="913 191 15 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="994 150 7 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="997 191 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="918 335 32 6" fill="solid: ffffffff" hasStroke="0" text="M-SEC."
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="980 335 21 6" fill="solid: ffffffff" hasStroke="0" text="SEC."
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="952 257 19 6" fill="solid: ffffffff" hasStroke="0" text="450"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="912 274 19 6" fill="solid: ffffffff" hasStroke="0" text="50"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="34" typefaceStyle="Bold"/>
    <TEXT pos="913 315 15 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="994 274 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="997 315 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1025 335 32 6" fill="solid: ffffffff" hasStroke="0" text="M-SEC."
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1087 335 21 6" fill="solid: ffffffff" hasStroke="0" text="SEC."
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1059 257 22 6" fill="solid: ffffffff" hasStroke="0" text="450"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1024 274 14 6" fill="solid: ffffffff" hasStroke="0" text="50"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="34" typefaceStyle="Bold"/>
    <TEXT pos="1018 315 18 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1101 274 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1104 315 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1148 107 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1131 70 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1153 36 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1192 36 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1214 70 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1193 107 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1148 209 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1131 172 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1153 138 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1192 138 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1214 172 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1193 209 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1148 333 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1131 296 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1153 262 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1192 262 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1214 296 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1193 333 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1481 313 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1261 209 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1244 172 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1266 138 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1305 138 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1327 172 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1306 209 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1481 437 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1261 333 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1244 296 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1266 262 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1305 262 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1327 296 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1306 333 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1270 58 10 6" fill="solid: ffffffff" hasStroke="0" text="-6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1339 112 14 6" fill="solid: ffffffff" hasStroke="0" text="12"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1345 35 8 6" fill="solid: ffffffff" hasStroke="0" text="3"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1285 35 11 6" fill="solid: ffffffff" hasStroke="0" text="-3"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1280 112 22 6" fill="solid: ffffffff" hasStroke="0" text="-12"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1270 86 11 6" fill="solid: ffffffff" hasStroke="0" text="-9"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1360 86 8 6" fill="solid: ffffffff" hasStroke="0" text="9"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1360 58 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="888 180.5 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="888 130 16 17" fill="solid: ffffffff" hasStroke="0" text="ON"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="580 333 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="563 296 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="585 262 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="624 262 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="646 296 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="625 333 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="580 220 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="563 183 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="585 149 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="624 149 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="646 183 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="625 220 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="729 163 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="712 126 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="734 92 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="773 92 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="795 126 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="774 163 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="580 107 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="563 70 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="585 36 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="624 36 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="646 70 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="625 107 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="729 276 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="712 239 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="734 205 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="773 205 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="795 239 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="774 276 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="848.5 154 63 17" fill="solid: ffffffff" hasStroke="0" text="CONTROL"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="848.5 146 63 17" fill="solid: ffffffff" hasStroke="0" text="KEYBOARD"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <RECT pos="880 130 1 20" fill="solid: ffffffff" hasStroke="0"/>
    <TEXT pos="37.5 131 123 14" fill="solid: ffffffff" hasStroke="0" text="MODULATION AMOUNT"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="33 107 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="16 70 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="38 36 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="77 36 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="99 70 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="78 107 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="70 220 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="53 183 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="75 149 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="114 149 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="136 183 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="115 220 16 6" fill="solid: ffffffff" hasStroke="0" text="10"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="16 285 8 6" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="38 251 8 6" fill="solid: ffffffff" hasStroke="0" text="4"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="77 251 8 6" fill="solid: ffffffff" hasStroke="0" text="6"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="99 285 8 6" fill="solid: ffffffff" hasStroke="0" text="8"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 468 224 l 463 232 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 473 232 l 468 224 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 468 111 l 463 119 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 473 119 l 468 111 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 442 190 l 449 182 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 442 77 l 449 69 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 449 187 l 449 182 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 449 74 l 449 69 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 466 151 l 473 143 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 466 38 l 473 30 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 473 38 l 473 30 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 510 151 l 510 143 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 518 143 l 510 143 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 518 143 l 518 151 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 526 151 l 518 151 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 510 38 l 510 30 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 518 30 l 510 30 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 518 30 l 518 38 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 526 38 l 518 38 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 532 190 l 532 182 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 538 190 l 538 182 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 538 190 l 547 190 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 538 182 l 532 182 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 532 77 l 532 69 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 538 69 l 532 69 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 538 77 l 547 77 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 538 69 l 538 77 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 510 232 l 510 224 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 515 232 l 526 232 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 515 224 l 515 232 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 515 224 l 510 224 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 510 119 l 510 111 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 515 111 l 510 111 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 515 111 l 515 119 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 515 119 l 526 119 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 143 93 l 138 85 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 133 93 l 138 85 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 161 93 l 161 85 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 169 85 l 161 85 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 169 85 l 169 93 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 177 93 l 169 93 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 473 151 l 473 143 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 449 187 l 453 190 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 452 303 l 445 295 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff000000" hasStroke="1" stroke="2, curved, rounded"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 449 74 l 453 77 x</PATH>
    <TEXT pos="845 120 11 14" fill="solid: ffffffff" hasStroke="0" text="1"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="845 171 11 14" fill="solid: ffffffff" hasStroke="0" text="2"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="1316 25 8 6" fill="solid: ffffffff" hasStroke="0" text="0"
          fontname="Default font" fontsize="11.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <RECT pos="0 400 1400 1" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="0 401 1400 50" fill="linear: 48.571% 99.556%, 48.571% 90.667%, 0=ff0e0e0e, 1=ff202020"
          hasStroke="0"/>
    <TEXT pos="8 405 184 26" fill="solid: ffffffff" hasStroke="0" text="MiniMOOD"
          fontname="Default font" fontsize="27.0" kerning="0.0" bold="0"
          italic="0" justification="9"/>
    <TEXT pos="10 432 462 11" fill="solid: ffffffff" hasStroke="0" text="Coded at Laboratorio di Informatica Musicale by Davide Bianchi &amp; Giorgio Presti :: V1.1"
          fontname="Default font" fontsize="10.0" kerning="0.0" bold="0"
          italic="0" justification="9"/>
  </BACKGROUND>
  <SLIDER name="octave_osc1_slider" id="70452fca48b5e04b" memberName="octaveOsc1Slider"
          virtualName="" explicitFocusOrder="0" pos="237 38 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="waveform_osc1_slider" id="22ea4f2694d9b18c" memberName="waveformOsc1Slider"
          virtualName="" explicitFocusOrder="0" pos="449 38 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="waveform_osc2_slider" id="1fec02e27976578" memberName="waveformOsc2Slider"
          virtualName="" explicitFocusOrder="0" pos="449 151 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="octave_osc3_slider" id="1a767a17ff0203f6" memberName="octaveOsc3Slider"
          virtualName="" explicitFocusOrder="0" pos="237 264 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="detune_osc2_slider" id="83201a3043a24280" memberName="detuneOsc2Slider"
          virtualName="" explicitFocusOrder="0" pos="345 145 85 87" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="octave_osc2_slider" id="b63997f24ef422d2" memberName="octaveOsc2Slider"
          virtualName="" explicitFocusOrder="0" pos="237 151 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="detune_osc3_slider" id="242a12a6cf39b3d1" memberName="detuneOsc3Slider"
          virtualName="" explicitFocusOrder="0" pos="345 258 85 87" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="waveform_osc3_slider" id="4165962ab0edf100" memberName="waveformOsc3Slider"
          virtualName="" explicitFocusOrder="0" pos="449 264 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="gain_osc1_slider" id="befe6d0e46b072fb" memberName="gainOsc1Slider"
          virtualName="" explicitFocusOrder="0" pos="566 38 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="gain_osc2_slider" id="fffa61905383fc9e" memberName="gainOsc2Slider"
          virtualName="" explicitFocusOrder="0" pos="566 151 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="gain_osc3_slider" id="c1c624401a2d74a2" memberName="gainOsc3Slider"
          virtualName="" explicitFocusOrder="0" pos="566 264 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="mute_osc1_slider" id="9694996aa8f7f433" memberName="muteOsc1Slider"
          virtualName="" explicitFocusOrder="0" pos="656 56 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="mute_osc2_slider" id="fc4ef226a24d38e7" memberName="muteOsc2Slider"
          virtualName="" explicitFocusOrder="0" pos="656 168 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" rotarysliderfill="849a6c2a"
          min="0.0" max="10.0" int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="mute_osc3_slider" id="f122814a03de7994" memberName="muteOsc3Slider"
          virtualName="" explicitFocusOrder="0" pos="656 280 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="mute_noise_slider" id="df0b42103c3088cf" memberName="muteNoiseSlider"
          virtualName="" explicitFocusOrder="0" pos="656 224 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="gain_noise_slider" id="ec96b74ad284f200" memberName="gainNoiseSlider"
          virtualName="" explicitFocusOrder="0" pos="715 207 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="attack_loudness_slider" id="65e086a936d7847a" memberName="attackLoudnessSlider"
          virtualName="" explicitFocusOrder="0" pos="920 264 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="decay_loudness_slider" id="6adb2607ba642b10" memberName="decayLoudnessSlider"
          virtualName="" explicitFocusOrder="0" pos="1027 264 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="sustain_loudness_slider" id="8cc0678c263c1061" memberName="sustainLoudnessSlider"
          virtualName="" explicitFocusOrder="0" pos="1134 264 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="attack_filter_slider" id="b7bf558c20889432" memberName="attackFilterSlider"
          virtualName="" explicitFocusOrder="0" pos="920 140 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="decay_filter_slider" id="723fdbac13ea4de" memberName="decayFilterSlider"
          virtualName="" explicitFocusOrder="0" pos="1027 140 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="contour_filter_slider" id="9c83f62a523bb018" memberName="contourFilterSlider"
          virtualName="" explicitFocusOrder="0" pos="1134 38 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="resonance_filter_slider" id="f42a46af648c0765" memberName="resonanceFilterSlider"
          virtualName="" explicitFocusOrder="0" pos="1027 38 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="cutoff_rate_filter_slider" id="d763dda18ec11b6e" memberName="cutoffRateFilterSlider"
          virtualName="" explicitFocusOrder="0" pos="920 38 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="sustain_filter_slider" id="6492264e2ae022a" memberName="sustainFilterSlider"
          virtualName="" explicitFocusOrder="0" pos="1134 140 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="filter_modulation_enabler_slider" id="ef0fb2d9aa5b593c"
          memberName="filterModulationEnablerSlider" virtualName="" explicitFocusOrder="0"
          pos="852 56 54 40" bkgcol="ff000000" thumbcol="fff05b2c" trackcol="d02a2727"
          min="0.0" max="10.0" int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="rate_glide_slider" id="c98407ae9c44d121" memberName="rateGlideSlider"
          virtualName="" explicitFocusOrder="0" pos="1247 140 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="osc_modulation_enabler_slider" id="364a2d04923ba0a" memberName="oscModulationEnablerSlider"
          virtualName="" explicitFocusOrder="0" pos="170 113 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="rate_lfo_slider" id="e53de03822167005" memberName="rateLfoSlider"
          virtualName="" explicitFocusOrder="0" pos="19 38 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="waveform_lfo_slider" id="d79c0e2b361027d0" memberName="waveformLfoSlider"
          virtualName="" explicitFocusOrder="0" pos="124 56 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="glide_enabler_slider" id="562f257f73123da2" memberName="glideEnablerSlider"
          virtualName="" explicitFocusOrder="0" pos="1339 160 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="release_enabler_slider" id="e96eeccab47e4bbd" memberName="releaseEnablerSlider"
          virtualName="" explicitFocusOrder="0" pos="1150 354 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="type_noise_slider" id="74a6bf0f034a2bd3" memberName="typeNoiseSlider"
          virtualName="" explicitFocusOrder="0" pos="805 218 54 54" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" rotarysliderfill="849a6c2a"
          rotaryslideroutline="849a6c2a" min="0.0" max="10.0" int="0.0"
          style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="gain_moog_slider" id="cd5a591cdca3f7e5" memberName="gainMoogSlider"
          virtualName="" explicitFocusOrder="0" pos="1247 264 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="gain_enabler_slider" id="5b585baf65e93564" memberName="gainEnablerSlider"
          virtualName="" explicitFocusOrder="0" pos="1339 284 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="osc3_control_enabler_slider" id="f7a388146f1f389d" memberName="osc3ControlEnablerSlider"
          virtualName="" explicitFocusOrder="0" pos="185 274 40 54" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="modulation_mix_slider" id="6711654857bc48d1" memberName="modulationMixSlider"
          virtualName="" explicitFocusOrder="0" pos="19 253 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="mod_rx_slider" id="c650c89b035466" memberName="modRxSlider"
          virtualName="" explicitFocusOrder="0" pos="123 290 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="mod_sx_slider" id="315774b7583da0a" memberName="modSxSlider"
          virtualName="" explicitFocusOrder="0" pos="123 250 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="pitch_wheel_slider" id="fc98aba0ca71cb44" memberName="pitchWheelSlider"
          virtualName="" explicitFocusOrder="0" pos="1278 32 85 87" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="gain_ext_input_slider" id="5eb9683568e0c16f" memberName="gainExtInputSlider"
          virtualName="" explicitFocusOrder="0" pos="715 94 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="modulation_wheel_slider" id="3881703839aa9606" memberName="modulationWheelSlider"
          virtualName="" explicitFocusOrder="0" pos="56 151 85 75" min="0.0"
          max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="keyboard_control1_slider" id="235ef8bb020b28bd" memberName="keyboardControl1Slider"
          virtualName="" explicitFocusOrder="0" pos="852 107 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="keyboard_control2_slider" id="ce5aa35a75b6b163" memberName="keyboardControl2Slider"
          virtualName="" explicitFocusOrder="0" pos="852 158 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="mute_ext_input_slider" id="6be96e4d3eabd239" memberName="muteExtInputSlider"
          virtualName="" explicitFocusOrder="0" pos="656 112 54 40" bkgcol="ff000000"
          thumbcol="fff05b2c" trackcol="d02a2727" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <TEXTBUTTON name="Save" id="3e35e1a45c3f53de" memberName="saveButton" virtualName=""
              explicitFocusOrder="0" pos="1300 413 86 24" bgColOff="ff4d4d4d"
              buttonText="Save" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Save" id="57be1be7cda98953" memberName="loadButton" virtualName=""
              explicitFocusOrder="0" pos="1204 413 86 24" bgColOff="ff4d4d4d"
              buttonText="Load" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Redo" id="ca50f2bc401e4b1e" memberName="redoButton" virtualName=""
              explicitFocusOrder="0" pos="1092 413 86 24" bgColOff="ff4d4d4d"
              buttonText="Redo" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Undo" id="d429c14dc7c3642d" memberName="undoButton" virtualName=""
              explicitFocusOrder="0" pos="996 413 86 24" bgColOff="ff4d4d4d"
              buttonText="Undo" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Panic" id="de42b1b7bca70e67" memberName="panicButton" virtualName=""
              explicitFocusOrder="0" pos="884 413 86 24" bgColOff="ff4d4d4d"
              buttonText="Panic" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

