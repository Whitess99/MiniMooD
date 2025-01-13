/*
  ==============================================================================

    Mixer.h
    Created: 22 Oct 2021 2:04:40pm
    Author:  david

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "MoogParameters.h"
#include "CorrectionFilters.h"

class MoogMixer {
public: 
    MoogMixer() {
        gainOsc1.setCurrentAndTargetValue(DEFAULT_GAIN * DEFAULT_MUTE_OSC_1);
        gainOsc2.setCurrentAndTargetValue(DEFAULT_GAIN * DEFAULT_MUTE_OSC);
        gainOsc3.setCurrentAndTargetValue(DEFAULT_GAIN * DEFAULT_MUTE_OSC);
        gainNoise.setCurrentAndTargetValue(DEFAULT_GAIN * DEFAULT_MUTE_NOISE);
        gainExtInput.setCurrentAndTargetValue(DEFAULT_GAIN);
    };
    ~MoogMixer() {};
    void prepareToPlay(float sr)
    {
        sampleRate = sr; 
        gainOsc1.reset(sr, 0.01f);
        gainOsc2.reset(sr, 0.01f);
        gainOsc3.reset(sr, 0.01f);
        gainNoise.reset(sr, 0.01f);
        gainExtInput.reset(sr, 0.01f);

        CF1.prepareToPlay(sr);
        CF2.prepareToPlay(sr);
        CF3.prepareToPlay(sr);
    }
    // Setter
    //void setVelocity(float velocity = 1.0) { keyVelocity = velocity; }

    void setMuteOsc1(bool newValue)
    {
        muteOsc1 = newValue;
        setGainOsc1(sliderGainOsc1);
    }
    void setMuteOsc2(bool newValue)
    {
        muteOsc2 = newValue;
        setGainOsc2(sliderGainOsc2);
    }
    void setMuteOsc3(bool newValue)
    {
        muteOsc3 = newValue;
        setGainOsc3(sliderGainOsc3);
    }
    void setMuteNoise(bool newValue)
    {
        muteNoise = newValue;
        setGainNoise(sliderGainNoise);
    }
    void setGainOsc1(float newValue)
    {
        sliderGainOsc1 = newValue;
        gainOsc1.setTargetValue(newValue * muteOsc1);
    }
    void setGainOsc2(float newValue)
    {
        sliderGainOsc2 = newValue;
        gainOsc2.setTargetValue(newValue * muteOsc2);
    }
    void setGainOsc3(float newValue)
    {
        sliderGainOsc3 = newValue;
        gainOsc3.setTargetValue(newValue * muteOsc3);
    }
    void setGainNoise(float newValue)
    {
        sliderGainNoise = newValue;
        gainNoise.setTargetValue(newValue * muteNoise);
    }
    void setGainExtInput(float newValue)
    {
        sliderGainExtInput = newValue;
        gainExtInput.setTargetValue(newValue);
    }

    void getNextAudioBlock(AudioBuffer<float>& outputBuffer, AudioBuffer<float>& bufferOsc1, AudioBuffer<float>& bufferOsc2, AudioBuffer<float>& bufferOsc3, AudioBuffer<float>& bufferNoise, int numOutputChannels, int startSample, int numSamples)
    {
        //for (int k = 0; k < numSamples; k++)
        //{
        //    outputBuffer.applyGain(0, startSample + k, 1, getGainExtInput());
        //    bufferOsc1.applyGain(0, startSample + k, 1, getGainOsc1());
        //    bufferOsc2.applyGain(0, startSample + k, 1, getGainOsc2());
        //    bufferOsc3.applyGain(0, startSample + k, 1, getGainOsc3());
        //    bufferNoise.applyGain(0, startSample + k, 1, getGainNoise());
        //}

        CF1.processBlock(bufferOsc1, startSample, numSamples);
        CF2.processBlock(bufferOsc2, startSample, numSamples);
        CF3.processBlock(bufferOsc3, startSample, numSamples);

        gainExtInput.applyGain(outputBuffer.getWritePointer(0) + startSample, numSamples);
        gainOsc1.applyGain(bufferOsc1.getWritePointer(0) + startSample, numSamples);
        gainOsc2.applyGain(bufferOsc2.getWritePointer(0) + startSample, numSamples);
        gainOsc3.applyGain(bufferOsc3.getWritePointer(0) + startSample, numSamples);
        gainNoise.applyGain(bufferNoise.getWritePointer(0) + startSample, numSamples);

        for (auto i = numOutputChannels; --i >= 0;)
        {
            outputBuffer.addFrom(i, startSample, bufferOsc1, i, startSample, numSamples);
            outputBuffer.addFrom(i, startSample, bufferOsc2, i, startSample, numSamples);
            outputBuffer.addFrom(i, startSample, bufferOsc3, i, startSample, numSamples);
            outputBuffer.addFrom(i, startSample, bufferNoise, i, startSample, numSamples);
        }
    }
    
private: 
    SmoothedValue<float, ValueSmoothingTypes::Linear> gainOsc1;
    SmoothedValue<float, ValueSmoothingTypes::Linear> gainOsc2;
    SmoothedValue<float, ValueSmoothingTypes::Linear> gainOsc3;
    SmoothedValue<float, ValueSmoothingTypes::Linear> gainNoise;
    SmoothedValue<float, ValueSmoothingTypes::Linear> gainExtInput;
    double sampleRate = 44100.0;
    //float keyVelocity = 1.0f;
    float sliderGainOsc1 = DEFAULT_GAIN;
    float sliderGainOsc2 = DEFAULT_GAIN;
    float sliderGainOsc3 = DEFAULT_GAIN;
    float sliderGainNoise = DEFAULT_GAIN;
    float sliderGainExtInput = DEFAULT_GAIN;
    bool muteOsc1 = DEFAULT_MUTE_OSC_1;
    bool muteOsc2 = DEFAULT_MUTE_OSC;
    bool muteOsc3 = DEFAULT_MUTE_OSC;
    bool muteNoise = DEFAULT_MUTE_NOISE;
    
    CorrectionFilter CF1, CF2, CF3;

    // Getter
    //float getGainOsc1() { return gainOsc1.getNextValue() * keyVelocity; }
    //float getGainOsc2() { return gainOsc2.getNextValue() * keyVelocity; }
    //float getGainOsc3() { return gainOsc3.getNextValue() * keyVelocity; }
    //float getGainNoise() { return gainNoise.getNextValue() * keyVelocity; }
    //float getGainExtInput() { return gainExtInput.getNextValue() * keyVelocity; }
};
