#ifndef RESCENICIO_h
#define RESCENICIO_h

#include "Arduino.h"

void setupPin(byte numberPin, boolean statusMode)
{
  pinMode(numberPin, statusMode);
}
void outputSet(byte numberPin, boolean statusPin)
{
  digitalWrite(numberPin, statusPin);
}
void blink(byte numberPin, int delayBlink)
{
  digitalWrite(numberPin, HIGH);
  delay(delayBlink);
  digitalWrite(numberPin, LOW);
  delay(delayBlink);
}

#endif