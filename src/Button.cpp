#include "Button.h"

Button::Button(uint8_t pin) : pin(pin) {}

void Button::begin() {
    pinMode(pin, INPUT_PULLUP);
}

Button::Status Button::status() {
    Button::Status status;
    
    status.read = digitalRead(pin);
    return status;
}
