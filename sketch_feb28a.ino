#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
  for(int i=0;i<NUM_LEDS;i++){
    leds[i].fadeLightBy( 64 );
    leds[i] = CRGB::Green;
    leds[(NUM_LEDS-i)] = CRGB::Red;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Green;
    leds[(NUM_LEDS-i)] = CRGB::Red;
  }
    for(int i=0;i<NUM_LEDS;i++){
    leds[i].fadeLightBy( 64 );
    leds[i] = CRGB::Blue;
    leds[(NUM_LEDS-i)] = CRGB::Red;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Blue;
    leds[(NUM_LEDS-i)] = CRGB::Red;
}
}
