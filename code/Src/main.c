#include "uart.h"
#include "gpio.h"


void uart_send_char(char c) {
    while (!(USART1_SR & (1 << 7)));
    USART1_DR = c;
}

void uart_send_string(const char* s) {
    while (*s) {
        uart_send_char(*s++);
    }
}


int main(void)
{
	RCC_APB2ENR |= 0x0C | 1 << 14; // Enable GPIOA, GPIOB

	GPIOA_CRH = 0xb << 4;
	GPIOA_CRH |= 0x4 << 8;
	USART1_BRR = 0x0341;

	USART1_CR |= (1 << 13);
	USART1_CR |= (1 << 2);
	USART1_CR |= (1 << 3);
	while (1)
	{
		uart_send_string("Hello\r\n");
		delay(1000);
	}
}
