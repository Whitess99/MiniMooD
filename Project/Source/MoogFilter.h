/*
  ==============================================================================

    MoogFilter.h
    Created: 26 Nov 2021 11:02:05am
    Author:  david

  ==============================================================================
*/

#include <JuceHeader.h>
#include "MoogParameters.h"
#include "Matrix.h"

#pragma once

class MoogFilter {
public: 
    MoogFilter(){};
    void prepareToPlay(double sr, int outputChannels)
    {
        sampleRate = sr; 
        numOutputChannels = outputChannels;
        maxCutoffFrequency = sr * 0.499;
        update();
    };
    void setCutoffFrequency(double newCutoffFrequencyHz)
    {
        cutoffFrequency = jmin(newCutoffFrequencyHz, maxCutoffFrequency);
        update();
    };
    void setResonance(float newResonance)
    {
        k = newResonance;
    };
    float processSample(float x)
    {
        y = jacobianMatrix.newtonRaphson(x, s1, s2, s3, s4, k, g);

        v1 = g * saturationLUT(x - k * y[3]);
        v2 = g * saturationLUT(y[0] - y[1]);
        v3 = g * saturationLUT(y[1] - y[2]);
        v4 = g * saturationLUT(y[2] - y[3]);

        s1 = y[0] + v1;
        s2 = y[1] + v2;
        s3 = y[2] + v3;
        s4 = y[3] + v4;

        return y[3];
    };

private: 
    void update()
    {
        g = std::tan(juce::MathConstants<double>::pi * cutoffFrequency / sampleRate);
        g = saturationLUT(g);
    };

    dsp::LookupTableTransform<float> saturationLUT{ [](float x) { return std::tanh(x); }, float(-5), float(5), 128 };
    Matrix jacobianMatrix;
    double sampleRate = 44100.0;
    double cutoffFrequency = DEFAULT_CUTOFF_RATE;
    double maxCutoffFrequency = 0.0;
    float k = DEFAULT_RESONANCE;
    float g = 0;
    float v1 = 0, v2 = 0, v3 = 0, v4 = 0;
    float s1 = 0, s2 = 0, s3 = 0, s4 = 0;   
    float out[4] = { 0, 0, 0, 0 };
    float* y = out;
    int numOutputChannels = 0;   
};
