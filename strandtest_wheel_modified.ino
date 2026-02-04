//edited from the adafruit neopixel ring example strandtest_wheel fromt he neopixel library
//https://github.com/adafruit/Adafruit_NeoPixel

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

Adafruit_NeoPixel strip = Adafruit_NeoPixel(24, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.setBrightness(50);
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
    //first number: LED number, 
    //last three: amount of red, blue and green a number from 255 to 0
    strip.setPixelColor(12, strip.Color(255, 0, 0));
    strip.show();
    delay(10);
}

