/*
  ==============================================================================

    MonoSynth.h
    Created: 5 Dec 2022 7:42:27am
    Author:  Giorgio

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class KeysHistory
{
public:
    KeysHistory() {}
    ~KeysHistory() {}

    void press(const MidiMessage m)
    {
        lastVelocity = m.getFloatVelocity();
        keysPressed.push_back(m.getNoteNumber());
    }

    void release(const MidiMessage m)
    {
        auto releasedKeys = std::find(keysPressed.begin(), keysPressed.end(), m.getNoteNumber());
        if (any()) keysPressed.erase(releasedKeys);
    }

    bool newEventReady(const int threshold)
    {
        return (keysPressed.size() <= threshold) || (lastEventProvided != getCandidate());
    }

    int getNewEvent()
    {
        return lastEventProvided = getCandidate();
    }

    float getVelocity()
    {
        return lastVelocity;
    }

    void releaseAll()
    {
        if (any()) keysPressed.clear();
    }

    bool any()
    {
        return !keysPressed.empty();
    }

    void setStealing(int criterion)
    {
        stealCriterion = criterion;
    }

private:

    int getCandidate()
    {
        int nn = 0;

        switch (stealCriterion)
        {
        case 0: // "Lowest"
            nn = *std::min_element(keysPressed.begin(), keysPressed.end());
            break;
        case 1: // "Highest"
            nn = *std::max_element(keysPressed.begin(), keysPressed.end());
            break;
        case 2: // "Oldest"
            nn = keysPressed.front();
            break;
        case 3: // "Newest"
            nn = keysPressed.back();
            break;
        default:
            break;
        }

        return nn;
    }

    std::vector<int> keysPressed;
    int lastEventProvided = -1000;
    float lastVelocity = 1.0f;
    int stealCriterion = DEFAULT_STEAL;
};

class MonoSynthesiser : public Synthesiser
{
public:
    MonoSynthesiser() {}
    ~MonoSynthesiser() {}

    void handleMidiEvent(const MidiMessage& m) override
    {
        const int channel = m.getChannel();

        if (m.isNoteOn())
        {
            pressedKeys.press(m);
            //noteOn(channel, m.getNoteNumber(), m.getFloatVelocity());
            if (pressedKeys.newEventReady(1))
                noteOn(channel, pressedKeys.getNewEvent(), pressedKeys.getVelocity());
        }
        else if (m.isNoteOff())
        {
            pressedKeys.release(m);
            noteOff(channel, m.getNoteNumber(), m.getFloatVelocity(), true);

            if (pressedKeys.any() && pressedKeys.newEventReady(0))
                noteOn(channel, pressedKeys.getNewEvent(), pressedKeys.getVelocity());
        }
        else if (m.isAllNotesOff() || m.isAllSoundOff())
        {
            allNotesOff(channel, true);
            pressedKeys.releaseAll();
        }
        else if (m.isPitchWheel())
        {
            const int wheelPos = m.getPitchWheelValue();
            lastPitchWheelValues[channel - 1] = wheelPos;
            handlePitchWheel(channel, wheelPos);
        }
        else if (m.isAftertouch())
        {
            handleAftertouch(channel, m.getNoteNumber(), m.getAfterTouchValue());
        }
        else if (m.isChannelPressure())
        {
            handleChannelPressure(channel, m.getChannelPressureValue());
        }
        else if (m.isController())
        {
            handleController(channel, m.getControllerNumber(), m.getControllerValue());
        }
        else if (m.isProgramChange())
        {
            handleProgramChange(channel, m.getProgramChangeNumber());
        }
    }

    void panic()
    {
        allNotesOff(0, false);
        pressedKeys.releaseAll();
    }

    void setStealing(int criterion)
    {
        pressedKeys.setStealing(criterion);
    }

private:

    KeysHistory pressedKeys;

};
