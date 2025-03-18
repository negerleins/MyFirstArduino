#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class Button {
private:
    uint8_t pin;

public:
    Button(uint8_t pin);
    void begin();
    bool isPressed();
};

#endif
