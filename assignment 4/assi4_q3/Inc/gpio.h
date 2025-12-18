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
void green_on(void);
void green_off(void);
void blue_off(void);
void blue_on(void);
void switch_init(void);
int switch_on(void);

#endif /* GPIO_H_ */
