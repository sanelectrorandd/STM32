// my_gpio.h
#ifndef MY_GPIO_H
#define MY_GPIO_H

// Base Addresses
#define RCC_BASE        0x40021000
#define GPIOA_BASE      0x40010800
#define GPIOB_BASE      0x40010C00
#define GPIOC_BASE      0x40011000

// Peripheral Registers
#define RCC_APB2ENR     (*(volatile unsigned int*)(RCC_BASE + 0x18))
#define GPIOA_CRL       (*(volatile unsigned int*)(GPIOA_BASE + 0x00))
#define GPIOA_CRH       (*(volatile unsigned int*)(GPIOA_BASE + 0x04))
#define GPIOA_ODR       (*(volatile unsigned int*)(GPIOA_BASE + 0x0C))

#define GPIOB_CRL       (*(volatile unsigned int*)(GPIOB_BASE + 0x00))
#define GPIOB_ODR       (*(volatile unsigned int*)(GPIOB_BASE + 0x0C))

#define GPIOC_CRH       (*(volatile unsigned int*)(GPIOC_BASE + 0x04))
#define GPIOC_IDR       (*(volatile unsigned int*)(GPIOC_BASE + 0x08))

// Function declarations
void delay(volatile unsigned int t);
void blink();

#endif
