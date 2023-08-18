#include <juce_audio_processors/juce_audio_processors.h>
#include "PluginProcessor.cpp"

class PluginEditor : public juce::AudioProcessorEditor {
public:
  PluginEditor (PluginProcessor& p) : AudioProcessorEditor (&p), processor (p) {
    setSize (400, 300);
  }

  ~PluginEditor() {}

  void paint (juce::Graphics& g) override {
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
  }

  void resized() override {
    // This is where you would add your UI components
  }

private:
  PluginProcessor& processor;
};