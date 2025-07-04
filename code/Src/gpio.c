// my_gpio.c (optional if project grows)
#include "gpio.h"

void delay(volatile unsigned int t) {
    while (t--) {
        __asm__("nop");
    }
}

void blink() {
    GPIOA_ODR = 0x00004002;
    GPIOB_ODR = 0x00000001;
    delay(800000);
    GPIOA_ODR = 0x00000000;
    GPIOB_ODR = 0x00000000;
    delay(800000);
}
