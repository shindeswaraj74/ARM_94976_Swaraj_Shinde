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
	GPIOD->MODER &= ~(BV(31) | BV(25));
	GPIOD->MODER |= BV(30) | BV(24);
	GPIOD->OTYPER &= ~(BV(15) | BV(12));
	GPIOD->OSPEEDR &= ~(BV(31) | BV(30) | BV(24) | BV(25));
	GPIOD->PUPDR &= ~(BV(31) | BV(30) | BV(24) | BV(25));
}
void green_on(void)
{
	GPIOD->ODR |= BV(12);
}
void green_off(void)
{
	GPIOD->ODR &= ~(BV(12));
}
void blue_on(void){
	GPIOD->ODR |= BV(15);
}
void blue_off(void){
	GPIOD->ODR &= ~(BV(15));
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
