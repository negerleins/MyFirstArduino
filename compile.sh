#!/bin/bash

# Define the Fully Qualified Board Name (FQBN) for your board
BOARD_FQBN="arduino:avr:uno"

# Path to the sketch folder
SKETCH_PATH="/home/leins/Projects/MyFirstArduino"

# Compile the sketch using arduino-cli, including the hidden .lib folder
arduino-cli compile --fqbn $BOARD_FQBN --libraries "$SKETCH_PATH/.lib" $SKETCH_PATH

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful!"
else
    echo "Compilation failed!"
    exit 1
fi
