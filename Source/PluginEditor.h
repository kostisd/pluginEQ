/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class PluginEQAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    PluginEQAudioProcessorEditor (PluginEQAudioProcessor&);
    ~PluginEQAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PluginEQAudioProcessor& audioProcessor;

    juce::Slider midiVolume; // [1] - Added for this demo - slider volume controller
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PluginEQAudioProcessorEditor)
};

