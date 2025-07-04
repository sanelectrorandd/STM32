#include "gpio.h"

int main(void) {
    RCC_APB2ENR |= 0x0C; // Enable GPIOA, GPIOB

    GPIOA_CRL = 0x00000020;
    GPIOB_CRL = 0x00000002;
    GPIOA_CRH = 0x02000000;
    GPIOC_CRH = 0x00800000;

    while (1) {
        if ((GPIOC_IDR & 0x00002000) == 0) {
            blink();
        } else {
            GPIOB_ODR = 0x00000001;
            delay(800000);
            GPIOB_ODR = 0x00000000;
            delay(800000);
        }
    }
}
