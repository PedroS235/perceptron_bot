#include <Arduino.h>

// This is a blynk example to show everyting is working

/**
 * The setup function is called once at startup of the sketch
 */
void setup(void) { pinMode(LED_BUILTIN, OUTPUT); }

/**
 * The loop function is called in an endless loop
 */
void loop(void) {

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
