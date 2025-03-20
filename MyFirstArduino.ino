#include "src/Digital.h"
#include "src/Button.h"

#define LED_PIN 3
#define SPEAKER_PIN 4
#define BUTTON_PIN 5

Digital speaker(SPEAKER_PIN);
Digital led(LED_PIN);
Button button(BUTTON_PIN);

void setup()
{
  speaker.begin();
  led.begin();
  button.begin();
}

void loop()
{
  if (button.status().read == HIGH)
  {
    led.write(HIGH);
    speaker.write(HIGH);
  }

  if (led.status().read == HIGH)
  {
    led.write(LOW);
    speaker.write(LOW);
  }
}
