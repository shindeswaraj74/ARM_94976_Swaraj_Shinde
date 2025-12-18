/*
 * gpio.c
 *
 *  Created on: Dec 18, 2025
 *      Author: Win-10
 */
#include "gpio.h"

void led_init(void)
{
	RCC->AHB1ENR |= BV(3);
	GPIOD->MODER &= ~(BV(29));
	GPIOD->MODER |= BV(28);
	GPIOD->OTYPER &= ~(BV(14));
	GPIOD->OSPEEDR &= ~(BV(29) | BV(28));
	GPIOD->PUPDR &= ~(BV(28) | BV(29));
}
void led_on(void)
{
	GPIOD->ODR |= BV(14);
}
void led_off(void)
{
	GPIOD->ODR &= ~(BV(14));
}
void switch_init(void){
	RCC->AHB1ENR |= BV(0);
	GPIOA->MODER &= ~(BV(0) | BV(1));
	GPIOA->OSPEEDR &= ~(BV(0) | BV(1));
	GPIOA->PUPDR &= ~(BV(0) | BV(1));
}
int switch_on(void){
	return (GPIOA->IDR & BV(0)) ? 1:0;
}
