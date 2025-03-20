#include "Digital.h"

Digital::Digital(uint8_t pin) : pin(pin) {}

void Digital::begin() {
    pinMode(pin, OUTPUT);
}

void Digital::write(int input) {
    digitalWrite(pin, input);
}

Digital::Status Digital::status() {
    Digital::Status status;

    status.read = digitalRead(pin);
    return status;
}
