#ifndef DIGITAL_H
#define DIGITAL_H

#include <Arduino.h>

class Digital {
    private:
        uint8_t pin;

    public:
        Digital(uint8_t pin);
        void begin();
        void write(int input);

        struct Status { int read; };
        Status status();
};

#endif
