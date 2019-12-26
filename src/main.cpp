#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
}

int i = 0;

void loop()
{
  Serial.println("counter: " + String(i++));
  delay(1000);
}