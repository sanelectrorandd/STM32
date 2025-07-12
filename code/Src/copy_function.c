	#include "gpio.h"

	int main(void) {
		RCC_APB2ENR |= 0x0C; // Enable GPIOA, GPIOB

		GPIOA_CRL = 1<<5;
		GPIOB_CRL = 1<<1;
		GPIOA_CRH = 1<<24;
		GPIOC_CRH = 1<<23;

		while (1) {
			if ((GPIOC_IDR & 0x00002000) == 0) {
				blink();
			} else {
				GPIOB_ODR = 0x00000001;
				delay(1000);
				GPIOB_ODR = 0x00000000;
				delay(1000);
			}
		}
	}
