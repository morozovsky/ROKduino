#include <ROKduino.h>

ROKduino rok;

void setup() {
  // put your setup code here, to run once:
  rok.ledWrite(LED_LEFT, LED_ON);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  rok.ledWrite(LED_BOTH, LED_TOGGLE);
}