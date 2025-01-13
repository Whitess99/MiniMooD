/*
  ==============================================================================

    Noise.h
    Created: 31 Aug 2021 11:05:35pm
    Author:  david

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "MoogParameters.h"
#include "PinkNoise.h"

class MoogNoise 
{
public: 
    MoogNoise() {}
    ~MoogNoise() {}	
	void setNoiseType(bool newValue) { noiseType = newValue; }
	void prepareToPlay(double sr) {
		sampleRate = sr;
		pinkNoise.prepareToPlay(sr);
	}	
	void getNextAudioBlock(AudioBuffer<float>& buffer, int numOutputChannels, int startSample, int numSamples)
	{
		for (auto k = numSamples; --k >= 0;)
		{
			const float sampleValue = getNextAudioSample();

			for (auto i = numOutputChannels; --i >= 0;)
				buffer.setSample(i, startSample, sampleValue);

			++startSample;
		}
	}
	float getNextAudioSample() // Chosing between pink and white
	{
		float sampleValue = whiteNoise.nextFloat();

		//!noiseType ? 
		//	(sampleValue = pinkNoise.getNextAudioSample(sampleValue), sampleValue = jmap(sampleValue, 0.1f, 1.0f, -3.0f, +3.0f)):
		//	sampleValue = jmap(sampleValue, 0.0f, 1.0f, -1.0f, +1.0f);

		if (noiseType)
			sampleValue = jmap(sampleValue, 0.0f, 1.0f, -1.0f, +1.0f);
		else
		{
			sampleValue = pinkNoise.getNextAudioSample(sampleValue);
			sampleValue = jmap(sampleValue, 0.1f, 1.0f, -3.0f, +3.0f);
		}

		return sampleValue;
	}
	
private:	
	Random whiteNoise;
	PinkNoise pinkNoise;	
	double sampleRate;
	bool noiseType = DEFAULT_NOISE_TYPE;
};


