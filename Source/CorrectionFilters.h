/*
  ==============================================================================

    CorrectionFilters.h
    Created: 9 Dec 2022 11:08:09am
    Author:  Giorgio

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

#define LS_F 80.0f
#define LS_Q 0.50f
#define LS_G 6.0f       // was 12.0
#define HS_F 10000.0f
#define HS_Q 0.60f
#define HS_G 12.0f      // was 24.0

class CorrectionFilter
{
public:
    CorrectionFilter() {}
    ~CorrectionFilter() {}

    void prepareToPlay(double sr)
    {
        IIRCoefficients lsc = IIRCoefficients::makeLowShelf(sr, LS_F, LS_Q, Decibels::decibelsToGain(LS_G));
        IIRCoefficients hsc = IIRCoefficients::makeHighShelf(sr, HS_F, HS_Q, Decibels::decibelsToGain(HS_G));

        lows.setCoefficients(lsc);
        highs.setCoefficients(hsc);
    }

    void processBlock(AudioBuffer<float>& buffer, int startSample, int numSamples)
    {
        auto samples = buffer.getWritePointer(0) + startSample;
        lows.processSamples(samples, numSamples);
        highs.processSamples(samples, numSamples);
    }

private:

    IIRFilter lows, highs;

};