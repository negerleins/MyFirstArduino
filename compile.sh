#!/bin/bash

# This script compiles the Arduino sketch using arduino-cli

BOARD_FQBN="arduino:avr:uno"
SKETCH_PATH=$(pwd)

LIBRARY_PATH="$SKETCH_PATH/src"

arduino-cli compile --fqbn $BOARD_FQBN --libraries "$LIBRARY_PATH" $SKETCH_PATH

if [ $? -eq 0 ]; then
    echo "Compilation successful!"
else
    echo "Compilation failed!"
    exit 1
fi
