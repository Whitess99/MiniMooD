/*
  ==============================================================================

    MyLookAndFeel.h
    Created: 11 Aug 2021 10:32:40am
    Author:  david

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

#define BORDER_WIDTH 1.5f
#define KNOB_TO_TICK_RATIO 0.85
#define DEFAULT_NUM_TICKS 11


class RotarySliderLookAndFeel : public LookAndFeel_V4
{
public: 
    RotarySliderLookAndFeel(int type) { knobType = type; }
	void setNumOfTicks(int newValue) { numTicks = newValue; }
    void drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPosProportional, float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override  // Coordinate della bounding box in cui devo disegnare la rotella (non compreso il rettangolo in cui sono rappresentati i valori)
    {
		float radiusScaler = 1.0f; // Serve per scalare il raggio e creare dei dischi di dimensione diversa in base alla manopola che dobbiamo stilizzare
		switch (knobType) {
		case 0:	// Manopole range e waveform
			radiusScaler = 0.35f;
			break;
		case 1:	// Manopole generiche 
			radiusScaler = 0.5f;
			break;
		case 2:	// Manopole detune
			radiusScaler = 0.57f;
			break;
		}

		// Variabili temporanee: raggio disco esterno (nero), raggio disco interno (grigio), centro del raggio (x,y), bounding box del mio raggio (x,y) -> coordinate in alto a sinistra della mia box, diametro (sia per il disco interno che per quello esterno)	
		auto externalRadius = (jmin(width * 0.5f, height * 0.5f) - 2.0f * BORDER_WIDTH) * KNOB_TO_TICK_RATIO;
		auto internalRadius = externalRadius * radiusScaler;
		auto centreX = x + width * 0.5f;	
		auto centreY = y + height * 0.5f;		
		auto rxExternal = centreX - externalRadius;		
		auto ryExternal = centreY - externalRadius;
		auto rwExternal = externalRadius * 2.0f;
		auto rxInternal = centreX - internalRadius;
		auto ryInternal = centreY - internalRadius;
		auto rwInternal = internalRadius * 2.0f;		

		// Colori utilizzati
		Colour brightColour = Colour(0xff2b2d31);
		Colour darkColour = Colour(0xff0d0d11);
		Colour silverColour = Colour(0xff8e8686);

		// Manopole
		// Disco esterno nero 
		g.setGradientFill(ColourGradient(brightColour, rxExternal, ryExternal, darkColour.brighter(0.05f), rxExternal, ryExternal + rwExternal, false));
		g.fillEllipse(rxExternal, ryExternal, rwExternal, rwExternal);
		// Contorno disco esterno nero
		g.setGradientFill(ColourGradient(brightColour.brighter(0.2f), rxExternal, ryExternal, darkColour.darker(0.05f), rxExternal, ryExternal + rwExternal, false));
		g.drawEllipse(rxExternal, ryExternal, rwExternal, rwExternal, BORDER_WIDTH);
		// Disco interno chiaro
		g.setGradientFill(ColourGradient(silverColour.brighter(0.1), rxInternal, ryInternal, silverColour.darker(0.05f), rxInternal, ryInternal + rwInternal, false));
		g.fillEllipse(rxInternal, ryInternal, rwInternal, rwInternal);
		// Contorno disco interno chiaro
		g.setGradientFill(ColourGradient(silverColour.brighter(0.5f), rxInternal, ryInternal, silverColour.darker(0.05f), rxInternal, ryInternal + rwInternal, false));
		g.drawEllipse(rxInternal, ryInternal, rwInternal, rwInternal, BORDER_WIDTH);		

		// Variabili temporanee: lunghezza e larghezza del puntatore, angolo di rotazione, linea dx ed sx rispetto al puntatore centrale, 
		auto pointerLength = externalRadius - internalRadius;
		auto pointerThickness = 2.0f;
		auto angle = rotaryStartAngle + sliderPosProportional * (rotaryEndAngle - rotaryStartAngle);		
		
		// Creazione del puntatore
		Path centerTick, leftTick, rightTick;	
		centerTick.addRectangle(-pointerThickness * 0.5f, -externalRadius, pointerThickness, pointerLength);
		centerTick.applyTransform(AffineTransform::rotation(angle).translated(centreX, centreY));
		g.setGradientFill(ColourGradient(Colours::white, rxExternal, ryExternal, Colours::white.darker(0.2f), rxExternal, ryExternal + rwExternal, false));
		g.fillPath(centerTick);

		// Tick attorno al disco
		Path originalTickShape, temp;	
		auto tickSize = 1.5f;		
		// Se la rotella è la più grande (tipo 2) allora i tick attorno vanno disegnati ad una distanza dal centro minore rispetto le altre rotelle
		knobType == 2 ? originalTickShape.addRectangle(-tickSize * 0.5f, -1.21* externalRadius, tickSize, 4) : originalTickShape.addRectangle(-tickSize * 0.5f, -1.25 * externalRadius, tickSize, 4);
		g.setColour(Colours::white);	
		for (int i = 0; i < numTicks; ++i)
		{
			temp = originalTickShape;
			float angle = rotaryStartAngle + i / (numTicks - 1.0f) * (rotaryEndAngle - rotaryStartAngle);
			temp.applyTransform(AffineTransform::rotation(angle).translated(centreX, centreY));	
			g.fillPath(temp);	
		}		
    }
private:
	int numTicks = DEFAULT_NUM_TICKS;
	int knobType;
};



class LinearSliderLookAndFeel : public LookAndFeel_V4
{
public:
	LinearSliderLookAndFeel(Colour colour) { this->colour = colour; }

	void drawLinearSlider(Graphics& g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle style, Slider& slider) override
	{
		// Colori slider 
		Colour black = Colour(0xff000000);

		// Coordinate in alto a sinistra + dimensioni background nero
		float tempX = 0.0f;
		float tempY = 0.0f;
		float tempHeight = 0.0f;
		float tempWidth = 0.0f;
		if (style == Slider::LinearHorizontal) {
			// Variabili temporanee - Nota: lo slider orizzontale è rovesciato, quindi la larghezza sarebbe l'altezza e viceversa
			float tempX = x - 5.5;	// Sposto verso sinistra il background (le coordinate x e y da sole non vanno bene)		
			float tempY = width*0.37;	// Sposto verso la metà dell'altezza il background
			tempWidth = height;
			tempHeight = width*0.5;
			// Disegno il background
			Path background;
			g.setColour(black);
			background.addRoundedRectangle(tempX, tempY, tempWidth, tempHeight, 2);
			g.fillPath(background);

			// Disegno il cursore
			tempY = width * 0.37;
			tempWidth = width * 0.65;
			tempHeight = width * 0.5;
			Path cursor;
			g.setColour(colour);
			cursor.addRoundedRectangle(tempX, tempY, tempWidth, tempHeight, 1);
			cursor.applyTransform(AffineTransform::translation(0, 0).translated(sliderPos*0.7 - 8.5, 0));
			g.fillPath(cursor);
		}
		else if (style == Slider::LinearVertical) {
			// Variabili temporanee 
			tempX = x + 19.5;
			tempY = y - 2;

			// Disegno il background
			Path background;
			g.setColour(black);
			background.addRoundedRectangle(tempX, tempY, 15, 35, 2);
			g.fillPath(background);

			// Disegno il cursore
			Path cursor;
			g.setColour(colour);
			cursor.addRoundedRectangle(tempX, tempY, 15, 18, 2);
			cursor.applyTransform(AffineTransform::translation(0, 0).translated(0, sliderPos*0.55-6.3));
			g.fillPath(cursor);
		}
	}
private:
	Colour colour;
};