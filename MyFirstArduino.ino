#include ".lib/Led/src/Led.h"
#include ".lib/Button/src/Button.h"

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
    delay(155);
    led.off();
    delay(155);
    led.on();
    delay(155);
    led.off();
  }
}
