#include <LiquidCrystal.h>

const int lowestPin = 8;

const int highestPin = 11;

void setup() {
  // put your setup code here, to run once:
   // set pins 2 through 13 as outputs:

  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++) {

    pinMode(thisPin, OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  // iterate over the pins:

  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++) {

    // fade the LED on thisPin from off to brightest:

    for (int brightness = 0; brightness < 255; brightness++) {

      analogWrite(thisPin, brightness);

      delay(1);

    }

    // fade the LED on thisPin from brightest to off:

    for (int brightness = 255; brightness >= 0; brightness--) {

      analogWrite(thisPin, brightness);

      delay(.5);

    }

    // pause between LEDs:

    delay(200);

  }
}
