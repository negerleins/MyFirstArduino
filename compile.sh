#!/bin/bash

BOARD_FQBN="arduino:avr:uno"
SKETCH_PATH=$(pwd)

# Explicitly add the library path
LIBRARY_PATH="$SKETCH_PATH/src"

arduino-cli compile --fqbn $BOARD_FQBN --libraries "$LIBRARY_PATH" $SKETCH_PATH

if [ $? -eq 0 ]; then
    echo "Compilation successful!"
else
    echo "Compilation failed!"
    exit 1
fi
