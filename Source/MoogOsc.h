/*
  ==============================================================================

	MoogOsc.h
	Created: 16 Jul 2021 3:11:03pm
	Author:  david

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "MoogParameters.h"
#include "Blit.h"
#include "MoogLFO.h"

class MoogOsc
{
public:
	MoogOsc(int numOsc) { numOscillator = numOsc; }
	~MoogOsc() {}
	void setWaveForm(float newValue) { waveform = roundToInt(newValue); lfo.setWaveForm(waveform); }
	void setModNoise(bool modNoiseOn, bool oscModOn) { isNoiseModOn = modNoiseOn; isOscModOn = oscModOn; }
	// void noteOn() { blit.noteOn(); }  // Deprecated! It was used for the synchronization of the 3 oscillator

	void prepareToPlay(double sr)
	{ 
		sampleRate = sr;
		blit.prepareToPlay(sr);
		lfo.prepareToPlay(sr, numOscillator);
	}

	void getNextAudioBlock(AudioBuffer<float>& outputBuffer, 
		                   AudioBuffer<double>& frequencyBuffer, 
		                   AudioBuffer<double>& fmBufferOsc3Lfo, 
		                   double modAmount, double modMix,
		                   int numOutputChannels, int startSample, int numSamples)
	{
		//for (int k = 0; k < numSamples; ++k)
		//{
		//	double frequencySample = frequencyBuffer.getSample(0, startSample);
		//	double fmOsc3Lfo = fmBufferOsc3Lfo.getSample(0, startSample);
		//	const float sampleValue = getNextAudioSample(frequencySample, fmOsc3Lfo, modAmount);
		//	for (auto i = numOutputChannels; --i >= 0;)
		//		outputBuffer.setSample(i, startSample, sampleValue);
		//	++startSample;
		//}
		for (int k = startSample; k < (startSample + numSamples); ++k)
		{
			double frequencySample = frequencyBuffer.getSample(0, k);
			double fmOsc3Lfo = fmBufferOsc3Lfo.getSample(0, k);
			const float sampleValue = getNextAudioSample(frequencySample, fmOsc3Lfo, modAmount, modMix);
			for (auto i = numOutputChannels; --i >= 0;)
				outputBuffer.setSample(i, k, sampleValue);
		}
	}

	float getNextAudioSample(double frequencySample, double freqOsc3Lfo, double modAmount, double modMix)
	{
		blit.updateLeakiness(freqOsc3Lfo, modAmount, isOscModOn, isNoiseModOn, modMix);

		if (frequencySample <= 20) // Naive for low frequency
		{
			lfo.setFrequency(frequencySample);
			sampleValue = lfo.getNextAudioSample();
		}
		else // Blit for others
			sampleValue = blit.updateWaveform(frequencySample, waveform, numOscillator);

		return sampleValue;
	}

	void clearAccumulator() 
	{
		blit.clearAccumulator();
	}

private:
	Blit blit;
	MoogLFO lfo;
	double sampleRate = 44100.0;
	float sampleValue = 0.0f;	
	int numOscillator;
	int waveform = DEFAULT_WF;
	bool isOscModOn = 0;
	bool isNoiseModOn = 0;
};
