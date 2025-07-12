#ifndef UART_H
#define UART_H

#define RCC_BASE    0x40021000
#define GPIOA_BASE  0x40010800
#define USART1_BASE 0x40013800 

#define RCC_APB2ENR     (*(volatile unsigned int*)(RCC_BASE + 0x18))

#define GPIOA_CRH       (*(volatile unsigned int*)(GPIOA_BASE + 0x04))

#define USART1_SR       (*(volatile unsigned int*)(USART1_BASE + 0x00))
#define USART1_DR       (*(volatile unsigned int*)(USART1_BASE + 0x04))
#define USART1_CR       (*(volatile unsigned int*)(USART1_BASE + 0x0C))
#define USART1_BRR       (*(volatile unsigned int*)(USART1_BASE + 0x08))
#endif
