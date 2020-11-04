/*
 * SPI_ws2812.h
 *
 *  Created on: 02-Nov-2020
 *      Author: Dhananjay Khairnar
 */

#ifndef MAIN_SPI_WS2812_H_
#define MAIN_SPI_WS2812_H_
#include <stdio.h>
#include <string.h>
#include "driver/spi_master.h"
#include "driver/gpio.h"

typedef struct CRGB {
	union {
		struct {
            union {
                uint8_t r;
                uint8_t red;
            };
            union {
                uint8_t g;
                uint8_t green;
            };
            union {
                uint8_t b;
                uint8_t blue;
            };
        };
		uint8_t raw[3];
		uint32_t num;
	};
}CRGB;

void initSPIws2812();
void fillCol(uint32_t col);
void fillBuffer(uint32_t* bufLed, int Count);
void led_strip_update();


#endif /* MAIN_SPI_WS2812_H_ */
