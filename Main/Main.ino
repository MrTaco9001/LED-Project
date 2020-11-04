#include <FastLED.h>

#define LED_DATA_PIN 2
#define LED_PWR_PIN 1

#define NUM_LEDS 58
#define DURATION 20

CRGB leds[NUM_LEDS];

void setup()
{
	pinMode(LED_PWR_PIN, OUTPUT);
	pinMode(LED_DATA_PIN, OUTPUT);

	digitalWrite(LED_PWR_PIN, HIGH);

	FastLED.addLeds<WS2812B, LED_DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop()
{
	for (int i = 0; i < NUM_LEDS; i++)
	{
		FastLED.clear();
		leds[i].setRGB(0, random(255), random(255));
		FastLED.show();
	}

	// for (int i = 0; i < (NUM_LEDS / 2); i++)
	// {
	// 	FastLED.clear();
	// 	leds[i].setRGB(255, 0, 0);
	// 	FastLED.show();
	// 	delay(DURATION / 2);
	// 	FastLED.clear();
	// 	leds[NUM_LEDS - i].setRGB(255, 0, 0);
	// 	FastLED.show();
	// 	delay(DURATION / 2);
	// }
}
