/*
  ==============================================================================

    PinkNoise.h
    Created: 13 Oct 2021 12:36:41pm
    Author:  david

  ==============================================================================
*/
// https://dsp.stackexchange.com/questions/322/pink-1-f-pseudo-random-noise-generation per maggiori info
// https://ccrma.stanford.edu/~jos/sasp/Example_Synthesis_1_F_Noise.html per maggiori info

#pragma once
#include <JuceHeader.h>
#include "MoogParameters.h"

class PinkNoise {
public:
	void prepareToPlay(double sr) {
		sampleRate = sr;
		calculateFilterCoefficients();
	}
	float getNextAudioSample(float input) {
		//DBG( b0 << " " << b1 << " " << b2 << " " << b3 << " " << -a1 << " " << -a2 << " " << -a3);
		auto output = b0 * input + v1;
		JUCE_SNAP_TO_ZERO(output);
		v1 = b1 * input + a1 * output + v2;
		v2 = b2 * input + a2 * output + v3;
		v3 = b3 * input + a3 * output;
		return output;
	}

private:
	std::vector<double> poles;
	std::vector<double> zeros;
	double dividerPoles[3] = { 0.098446902, 0.0837891, 1 };
	double dividerZeros[3] = { 0.082277774, 0.097896557, 1 };
	double sampleRate;
	double b0 = 0.0f;
	double b1 = 0.0f;
	double b2 = 0.0f;
	double b3 = 0.0f;
	double a1 = 0.0f;
	double a2 = 0.0f;
	double a3 = 0.0f;
	double v1 = 0.0f;
	double v2 = 0.0f;
	double v3 = 0.0f;

	void calculateFilterCoefficients() {
		calculatePoles();
		calculateZeros();		
		a1 = poles[0] + poles[1] + poles[2];
		a2 = -(poles[0] * poles[1] + poles[0] * poles[2] + poles[1] * poles[2]);
		a3 = poles[0] * poles[1] * poles[2];	
		b1 = -(zeros[0] + zeros[1] + zeros[2]);
		b2 = (zeros[0] * zeros[1] + zeros[0] * zeros[2] + zeros[1] * zeros[2]);
		b3 = -(zeros[0] * zeros[1] * zeros[2]);		
		auto sommaPoli = 1 - a1 - a2 - a3;
		auto sommaZeri = b1 + b2 + b3;
		b0 = (sommaPoli*1.099092743)/(sommaZeri+1);		
		b1 = -b0*(zeros[0] + zeros[1] + zeros[2]);
		b2 = b0*(zeros[0] * zeros[1] + zeros[0] * zeros[2] + zeros[1] * zeros[2]);
		b3 = -b0*(zeros[0] * zeros[1] * zeros[2]);		
	}
	void calculatePoles() {
		poles.clear();
		double pole = 0.0f;
		double frequency = 4120.595966;
		double exp = 0.0f;
		for (int i = 0; i < 3; i++) {
			exp = -(2 * M_PI * frequency / sampleRate);
			pole = std::pow(M_E, exp);
			poles.push_back(pole);
			frequency *= dividerPoles[i];
		}
		// Adesso i poli sono ordinati da z^(-1), z^(-2), z^(-3)
		std::reverse(poles.begin(), poles.end());
	}
	void calculateZeros() {
		zeros.clear();
		double zero = 0.0f;
		double frequency = 15622.303;
		double exp = 0.0f;
		for (int i = 0; i < 3; i++) {			
			exp = -(2 * M_PI * frequency / sampleRate);
			zero = std::pow(M_E, exp);
			zeros.push_back(zero);
			frequency *= dividerZeros[i];
		}
		std::reverse(zeros.begin(), zeros.end());
	}
};

