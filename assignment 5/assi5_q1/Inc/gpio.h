/*
 * gpio.h
 *
 *  Created on: Dec 18, 2025
 *      Author: Win-10
 */

#ifndef GPIO_H_
#define GPIO_H_

#define BV(n) (1 << (n))

#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"

void led_init(void);
void led_on(uint8_t pin);
void led_off(uint8_t pin);
void interrupt(uint8_t pin);

#endif /* GPIO_H_ */
