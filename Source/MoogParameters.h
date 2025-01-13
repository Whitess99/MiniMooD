/*
  ==============================================================================

    MoogParameters.h
    Created: 8 Aug 2021 11:57:16am
    Author:  david

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#define M_PI juce::MathConstants<double>::pi
#define M_E juce::MathConstants<double>::euler

//Nomi parametri Oscillatori
#define NAME_MUTE_OSC1          "osc1_mute"
#define NAME_MUTE_OSC2          "osc2_mute"
#define NAME_MUTE_OSC3          "osc3_mute"
#define NAME_WF_OSC1		    "osc1_waveform"
#define NAME_WF_OSC2		    "osc2_waveform"
#define NAME_WF_OSC3		    "osc3_waveform"
#define NAME_OCTAVE_OSC1	    "osc1_octave"
#define NAME_OCTAVE_OSC2	    "osc2_octave"
#define NAME_OCTAVE_OSC3	    "osc3_octave"
#define NAME_DETUNE_OSC2        "osc2_detune"
#define NAME_DETUNE_OSC3	    "osc3_detune"
#define NAME_GAIN_OSC1		    "osc1_gain"
#define NAME_GAIN_OSC2		    "osc2_gain"
#define NAME_GAIN_OSC3		    "osc3_gain"
//Nomi parametri LFO 
#define NAME_WF_LFO		        "lfo_waveform"
#define NAME_RATE_LFO	        "lfo_rate"
//Nomi parametri Rumore 
#define NAME_MUTE_NOISE         "noise_mute"
#define NAME_GAIN_NOISE         "noise_gain"
#define NAME_NOISE_TYPE         "noise_type"
//Nomi parametri filtro
#define NAME_CUTOFF_RATE        "filter_cutoff_rate"
#define NAME_RESONANCE          "filter_resonance"
#define NAME_CONTOUR            "filter_contour"       
#define NAME_ATTACK_FILTER      "attack_filter"
#define NAME_DECAY_FILTER       "decay_filter"
#define NAME_SUSTAIN_FILTER     "sustain_filter"
//Nomi parametri Loudness ADSR
#define NAME_ATTACK_LOUD        "attack_loudness"
#define NAME_DECAY_LOUD         "decay_loudness"
#define NAME_SUSTAIN_LOUD       "sustain_loudness"
//Nomi parametri Enabler Generici
#define NAME_RELEASE_ENABLER    "release_enabler"
#define NAME_GLIDE_ENABLER      "glide_enabler"
#define NAME_KEYBOARD_CONTROL_1 "keyboard_control_1"
#define NAME_KEYBOARD_CONTROL_2 "keyboard_control_2"
#define NAME_OSC3_CONTROL		"osc3_control_enabler"
#define NAME_OSC_MODULATION		"osc_modulation_enabler"
#define NAME_FILTER_MODULATION	"filter_modulation_enabler"
#define NAME_MUTE_EXT_INPUT     "ext_input_mute"
#define NAME_GAIN_ENABLER       "gain_enabler"
//Nomi parametri modulazioni
#define NAME_MODSX              "modSx"
#define NAME_MODRX              "modRx"
#define NAME_MODULATION_MIX     "modulation_mix"
#define NAME_MODULATION_WHEEL   "modulation_wheel"
//Nomi parametri controlli generici
#define NAME_GLIDE_RATE		    "glide_rate"
#define NAME_TUNE_WHEEL         "tune_wheel"  
#define NAME_GAIN_EXT_INPUT     "ext_input_gain"
#define NAME_GAIN               "gain"

#define NAME_STEALING           "stealCriterion"

//Valori parametri oscillatori
#define DEFAULT_MUTE_OSC_1      true           // Se false gli oscillatori non suonano, se true suonano
#define DEFAULT_MUTE_OSC        false          // Se false gli oscillatori non suonano, se true suonano
#define DEFAULT_WF		        2
#define DEFAULT_OCTAVE_CHOICE	3
#define DEFAULT_DETUNE          0.0f
#define DEFAULT_GAIN	        0.3f
//Valori parametri LFO
#define DEFAULT_WF_LFO		    0
#define DEFAULT_RATE_LFO        3.0f	
#define DEFAULT_GAIN_LFO	    1.0f
#define RATE_SMTH_LFO           0.001f
//Valori parametri Noise
#define DEFAULT_MUTE_NOISE      false           // Se false noise non suona, se true suona
#define DEFAULT_NOISE_TYPE      1
//Valori parametri filtro
#define DEFAULT_CUTOFF_RATE     10000.0
#define MAX_CUTOFF_RATE         20000.0
#define DEFAULT_RESONANCE       0.2f
#define DEFAULT_CONTOUR         0.0f                      
//Valori parametri Loudness + Filter ADSR
#define DEFAULT_ATTACK          0.1f
#define DEFAULT_DECAY           0.1f
#define DEFAULT_SUSTAIN         1.0f
//Valori parametri Enabler Generici
#define DEFAULT_RELEASE_ENABLER     false
#define DEFAULT_GLIDE_ENABLER       false
#define DEFAULT_KEYBOARD_CONTROL_1  false
#define DEFAULT_KEYBOARD_CONTROL_2  false
#define DEFAULT_OSC3_CONTROL        true
#define DEFAULT_OSC_MODULATION      false
#define DEFAULT_FILTER_MODULATION   false
#define DEFAULT_MUTE_EXT_INPUT      false       // Se false non suona, se true suona
#define DEFAULT_GAIN_ENABLER        true
//Valori parametri modulazioni
#define DEFAULT_MODSX               true
#define DEFAULT_MODRX               true
#define DEFAULT_MODULATION_MIX      1.0f
#define DEFAULT_MODULATION_WHEEL    0.0
#define DEFAULT_MAX_MOD_AMOUNT      0.999f
#define DEFAULT_MIN_MOD_AMOUNT      0.001f
//Valori parametri Controlli Generici
#define DEFAULT_GLIDE_RATE		    0.001f
#define DEFAULT_PITCH_WHEEL         0.0f  
#define DEFAULT_TUNE_WHEEL          0.0f
#define DECAY_FOR_NO_DECAY          0.005f
#define DEFAULT_STEAL               3

#define TIME_PAR_SKEWNESS           0.33f
#define VELOCITY_DYN_RANGE          9.0f  //dB

static AudioProcessorValueTreeState::ParameterLayout createParameterLayout()
{
    std::vector<std::unique_ptr<RangedAudioParameter>> moogParameters;

    // Oscillators
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_MUTE_OSC1, "Mute Osc 1", DEFAULT_MUTE_OSC_1));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_MUTE_OSC2, "Mute Osc 2", DEFAULT_MUTE_OSC));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_MUTE_OSC3, "Mute Osc 3", DEFAULT_MUTE_OSC));
    moogParameters.push_back(std::make_unique<AudioParameterChoice>(NAME_WF_OSC1, "Waveform 1", StringArray{ "Triangular", "Saw/Tri", "Saw up", "Square", "Wide Square", "Narrow Square" }, DEFAULT_WF));
    moogParameters.push_back(std::make_unique<AudioParameterChoice>(NAME_WF_OSC2, "Waveform 2", StringArray{ "Triangular", "Saw/Tri", "Saw up", "Square", "Wide Square", "Narrow Square" }, DEFAULT_WF));
    moogParameters.push_back(std::make_unique<AudioParameterChoice>(NAME_WF_OSC3, "Waveform 3", StringArray{ "Triangular", "Saw down", "Saw up", "Square", "Wide Square", "Narrow Square" }, DEFAULT_WF));
    moogParameters.push_back(std::make_unique<AudioParameterChoice>(NAME_OCTAVE_OSC1, "Octave Osc 1", StringArray{ "LO", "32", "16", "8", "4", "2" }, DEFAULT_OCTAVE_CHOICE));
    moogParameters.push_back(std::make_unique<AudioParameterChoice>(NAME_OCTAVE_OSC2, "Octave Osc 2", StringArray{ "LO", "32", "16", "8", "4", "2" }, DEFAULT_OCTAVE_CHOICE));
    moogParameters.push_back(std::make_unique<AudioParameterChoice>(NAME_OCTAVE_OSC3, "Octave Osc 3", StringArray{ "LO", "32", "16", "8", "4", "2" }, DEFAULT_OCTAVE_CHOICE));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_DETUNE_OSC2, "Detune Osc 2", -8.0f, +8.0f, DEFAULT_DETUNE));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_DETUNE_OSC3, "Detune Osc 3", -8.0f, +8.0f, DEFAULT_DETUNE));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_GAIN_OSC1, "Gain Osc 1", 0.0f, 1.0f, DEFAULT_GAIN));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_GAIN_OSC2, "Gain Osc 2", 0.0f, 1.0f, DEFAULT_GAIN));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_GAIN_OSC3, "Gain Osc 3", 0.0f, 1.0f, DEFAULT_GAIN));
    // LFO
    moogParameters.push_back(std::make_unique<AudioParameterChoice>(NAME_WF_LFO, "Waveform LFO", StringArray{ "Triangular", "Square" }, DEFAULT_WF_LFO));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_RATE_LFO, "Freq. LFO", NormalisableRange<float>(0.05f, 200.0f, 0.05f, 0.35f), DEFAULT_RATE_LFO));
    // Noise
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_MUTE_NOISE, "Mute Noise", DEFAULT_MUTE_NOISE));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_GAIN_NOISE, "Gain Noise", 0.0f, 0.5f, DEFAULT_GAIN));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_NOISE_TYPE, "Noise Type", DEFAULT_NOISE_TYPE));
    // Filter
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_CUTOFF_RATE, "Cutoff Freq.", NormalisableRange<float>(10.0f, MAX_CUTOFF_RATE, 0.001, 0.4f), DEFAULT_CUTOFF_RATE));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_RESONANCE, "Resonance", NormalisableRange<float>(0.0f, 8.0f, 0.0001, 0.5f), DEFAULT_RESONANCE));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_CONTOUR, "Contour Amt.", NormalisableRange<float>(0.0f, 1.0f, 0.001, 0.32f), DEFAULT_CONTOUR));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_ATTACK_FILTER, "Attack (VCF)", NormalisableRange<float>(0.01f, 10.0f, 0.0001, TIME_PAR_SKEWNESS), DEFAULT_ATTACK));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_DECAY_FILTER, "Decay (VCF)", NormalisableRange<float>(0.01f, 10.0f, 0.0001, TIME_PAR_SKEWNESS), DEFAULT_DECAY));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_SUSTAIN_FILTER, "Sustain (VCF)", NormalisableRange<float>(0.0f, 1.0f, 0.001, 0.32f), DEFAULT_SUSTAIN));
    // Loudness ADSR
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_ATTACK_LOUD, "Attack (VCA)", NormalisableRange<float>(0.001f, 10.0f, 0.0001, TIME_PAR_SKEWNESS), DEFAULT_ATTACK));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_DECAY_LOUD, "Decay (VCA)", NormalisableRange<float>(0.004f, 10.0f, 0.0001, TIME_PAR_SKEWNESS), DEFAULT_DECAY));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_SUSTAIN_LOUD, "Sustain (VCA)", 0.0f, 1.0f, DEFAULT_SUSTAIN));
    // Generic Enabler
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_RELEASE_ENABLER, "Enable Release", DEFAULT_RELEASE_ENABLER));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_GLIDE_ENABLER, "Enable Glide", DEFAULT_GLIDE_ENABLER));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_KEYBOARD_CONTROL_1, "Keytrack 1 Enabler", DEFAULT_KEYBOARD_CONTROL_1));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_KEYBOARD_CONTROL_2, "Keytrack 2 Enabler", DEFAULT_KEYBOARD_CONTROL_2));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_OSC3_CONTROL, "Osc 3 Control", DEFAULT_OSC3_CONTROL));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_OSC_MODULATION, "Oscillator Modulation", DEFAULT_OSC_MODULATION));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_FILTER_MODULATION, "Filter Modulation", DEFAULT_FILTER_MODULATION));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_MUTE_EXT_INPUT, "Mute Ext. Input", DEFAULT_MUTE_EXT_INPUT));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_GAIN_ENABLER, "Gain Enabler", DEFAULT_GAIN_ENABLER));
    // Modulation Controls
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_MODSX, "OSC/EG Switch", DEFAULT_MODSX));
    moogParameters.push_back(std::make_unique<AudioParameterBool>(NAME_MODRX, "Noise/LFO Switch", DEFAULT_MODRX));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_MODULATION_MIX, "Modulation Mix", 0.0f, 1.0f, DEFAULT_MODULATION_MIX));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_MODULATION_WHEEL, "Modulation Amount", NormalisableRange<float>(0.0f, 1.0f, 0.0001, 0.4f), DEFAULT_MODULATION_WHEEL));
    // Generic Controls   
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_GLIDE_RATE, "Glide Rate", NormalisableRange<float>(0.001f, 2.0f, 0.0001, TIME_PAR_SKEWNESS), DEFAULT_GLIDE_RATE));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_TUNE_WHEEL, "Tune knob", -12.0f, +12.0f, DEFAULT_TUNE_WHEEL));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_GAIN_EXT_INPUT, "Ext. Input Gain", 0.0f, 1.0f, DEFAULT_GAIN));
    moogParameters.push_back(std::make_unique<AudioParameterFloat>(NAME_GAIN, "Gain", 0.0f, 1.0f, DEFAULT_GAIN));

    moogParameters.push_back(std::make_unique<AudioParameterChoice>(NAME_STEALING, "Note priority", StringArray{ "Lowest", "Highest", "Oldest", "Newest" }, DEFAULT_STEAL));

    return { moogParameters.begin(), moogParameters.end() };
}