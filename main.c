#include "SPI_ws2812.h"

//example use
void main()
{	
	CRGB leds[24]; //24 led
	initSPIws2812();
	for(int i = 0 ; i < 24 ; i++)
	{
		CRGB c = {.r=0,.g=0xff,.b=0};
		leds[i] = c;
	}
	
	fillBuffer((uint32_t)&leds,24);
	led_strip_update()
}
