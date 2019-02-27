#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS);
}
void loop() {
  for(int i=64;i<NUM_LEDS;i++){ 
      // Turn the first led red for 1 second
      leds[0] = CRGB::Red; 
      FastLED.show();
      delay(500);
      
      // Set the first led back to black for 1 second
      leds[0] = CRGB::Black;
      FastLED.show();
      delay(500);
      
   for(int i=110;i<NUM_LEDS;i++){
      // Turn the first led blue for 1 second
      leds[0] = CRGB::Blue; 
      FastLED.show();
      delay(500);
      
      // Set the first led back to black for 1 second
      leds[0] = CRGB::Black;
      FastLED.show();
      delay(500);
      
    for(int i=24;i<NUM_LEDS;i++){
       // Turn the first led green for 1 second
      leds[0] = CRGB::Green; 
      FastLED.show();
      delay(500);
      
      // Set the first led back to black for 1 second
      leds[0] = CRGB::Black;
      FastLED.show();
      delay(500)
        
    for(int dot = 0; dot < NUM_LEDS; dot++) make { 
            leds[dot] = CRGB::Blue;
            FastLED.show();
            // clear this led for the next time around the loop
            leds[dot] = CRGB::Black;
            delay(30);
        }
    }
  }
}
