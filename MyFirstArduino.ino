#include "Led.h"
#include "Button.h"

#define LED_PIN 13
#define BUTTON_PIN 5

Led led(LED_PIN);
Button button(BUTTON_PIN);

void setup()
{
  led.begin();
  button.begin();
}

void loop()
{
  if (!button.isPressed())
  {
    led.on();
  }
  else
  {
    led.off();
  }
}
