/*
 * ext_trig.c
 *
 *  Created on: Dec 19, 2025
 *      Author: Win-10
 */
#include "gpio.h"

extern volatile int flag;
extern volatile int flag2;

void ext_trig(void){
	RCC->AHB1ENR |= BV(0);

	GPIOA->MODER &= ~(BV(0) | BV(1));

	GPIOA->PUPDR &= ~(BV(0) | BV(1));

	SYSCFG->EXTICR[0] &= ~(BV(0) | BV(1) | BV(2) | BV(3));

	EXTI->IMR |= BV(0);

	EXTI->RTSR |= BV(0);

	NVIC_EnableIRQ(EXTI0_IRQn);
}

void EXTI0_IRQHandler(void){
	EXTI->PR |= BV(0);
	interrupt(14);
}
