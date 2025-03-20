#include "src/Digital.h"
#include "src/Button.h"

#define LED_PIN 4
#define BUTTON_PIN 5

Digital speaker(LED_PIN);
Button button(BUTTON_PIN);

void setup()
{
  speaker.begin();
  button.begin();
}

void loop()
{
  if (button.status().read == HIGH)
  {
    speaker.write(LOW);
  }

  if (speaker.status().read == LOW)
  {
    speaker.write(HIGH);
  }
}
