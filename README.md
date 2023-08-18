# JUCE VST Plugin

This repository contains a VST (Virtual Studio Technology) plugin developed using the JUCE framework. The plugin integrates with Hugging Face's Transformers library to use language models for generating text from audio.

## Architecture

1. **JUCE Framework**: The core framework used for creating the VST plugin. It handles all the audio processing and GUI development.

2. **LanguageModelProcessor Class**: Responsible for integrating with the Hugging Face's Transformers library. It has methods like `loadModel`, `generateText`, and `processAudio`.

3. **PluginProcessor Class**: The main class for the VST plugin. It handles the audio processing logic and uses the `LanguageModelProcessor` class for generating text from audio.

4. **PluginEditor Class**: Handles the GUI of the VST plugin. It displays the generated text and provides controls for the user to interact with the plugin.

5. **Hugging Face's Transformers Library**: Used for loading the language model and generating text from audio.

## Setup

The setup instructions will be added once the development is complete.