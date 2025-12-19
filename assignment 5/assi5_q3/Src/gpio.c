/*
 * gpio.c
 *
 *  Created on: Dec 18, 2025
 *      Author: Win-10
 */
#include "gpio.h"
#include "ext_trig.h"

void led_init(void)
{
	RCC->AHB1ENR |= BV(3);
	GPIOD->MODER &= ~(BV(29) | BV(31) | BV(27) | BV(25));
	GPIOD->MODER |= BV(28) | BV(24) | BV(26) | BV(30);
	GPIOD->OTYPER &= ~(BV(14) | BV(13) | BV(12) | BV(15));
	GPIOD->OSPEEDR &= ~(BV(29) | BV(28) | BV(24) | BV(25) | BV(26) | BV(27) | BV(30) | BV(31));
	GPIOD->PUPDR &= ~(BV(29) | BV(28) | BV(24) | BV(25) | BV(26) | BV(27) | BV(30) | BV(31));
}

void interrupt(uint8_t pin){
	GPIOD->ODR ^= (BV(pin));
}

