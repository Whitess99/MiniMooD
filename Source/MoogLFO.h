/*
  ==============================================================================

    Lfo.h
    Created: 16 Jul 2021 3:40:16pm
    Author:  david

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "MoogParameters.h"

class MoogLFO
{
public:
	MoogLFO()
	{
		frequency.setCurrentAndTargetValue(DEFAULT_RATE_LFO);	
		//gain.setCurrentAndTargetValue(1.0f);
	}
	~MoogLFO() {};
	void setFrequency(float newValue) {	frequency.setTargetValue(newValue);	}
	//void setGain(float newValue) { gain.setTargetValue(newValue); }
	void setWaveForm(float newWaveform) { waveform = roundToInt(newWaveform); }
	void prepareToPlay(double sr, int numOsc = 0)
	{
		sampleRate = sr;
		numOscillator = numOsc;
		frequency.reset(sr, RATE_SMTH_LFO);	
		//gain.reset(sampleRate, 0.01f);
	}	
	double getNextAudioSample()	
	{		
		switch (waveform)
		{
		case 0: // Triangolare
			sampleValue = 4.0 * abs(normalizedPhaseValue - 0.5) - 1.0;
			break;
		case 1: // Sawtooth decrescente 
			sampleValue = numOscillator ? -2 * normalizedPhaseValue + 1.0 : 0.8*(4 * abs(normalizedPhaseValue - 0.5) - 1.0) + 0.2*(-2.0 * normalizedPhaseValue + 1.0);
			break;
		case 2: // Sawtooth crescente
			sampleValue = 2.0 * normalizedPhaseValue - 1.0;
			break;
		case 3: // Onda quadra
			sampleValue = (normalizedPhaseValue > 0.5) - (normalizedPhaseValue < 0.5);
			break;
		case 4: // Onda quadra larga
			sampleValue = (normalizedPhaseValue > 0.35) - (normalizedPhaseValue <= 0.35);
			break;
		case 5: // Onda quadra stretta
			sampleValue = (normalizedPhaseValue > 0.2) - (normalizedPhaseValue <= 0.2);
			break;
		default:
			sampleValue = 0.0;
		}
		
		phaseIncrement = frequency.getNextValue() / sampleRate; // Mettere sample period
		normalizedPhaseValue += phaseIncrement;
		normalizedPhaseValue -= static_cast<int>(normalizedPhaseValue);
		return sampleValue;
	}

private:
	SmoothedValue<double, ValueSmoothingTypes::Multiplicative> frequency;
	//SmoothedValue<float, ValueSmoothingTypes::Linear> gain; // Is this used?
	double sampleRate = 1.0;
	double sampleValue = 0.0;
	double phaseIncrement = 1.0;
	double normalizedPhaseValue = 0.0;
	int waveform = DEFAULT_WF_LFO;	
	int numOscillator = 0;
};
