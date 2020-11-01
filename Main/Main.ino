#include <FastLED.h>

#define DATA_PIN 3
#define NUM_LEDS 10
#define BUTTON_PIN 2

int del = 75;
int buttonState = 0;

CRGB leds[NUM_LEDS];

void setup()
{
	// put your setup code here, to run once:
	pinMode(BUTTON_PIN, INPUT);

	FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop()
{
	// put your main code here, to run repeatedly:
	// leds[0] = CRGB::Green;
	// leds[9] = CRGB::Black;
	// FastLED.show();
	// delay(del);

	buttonState = digitalRead(BUTTON_PIN);
	CRGB

	if (buttonState == 1) {
		leds[0] = CRGB::Red;
		FastLED.show();
	} else {
		leds[0] = CRGB::Black;
		FastLED.show();
	}
}
