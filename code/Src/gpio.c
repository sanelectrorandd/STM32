#include "gpio.h"

void delay(volatile unsigned int t) {
    while (t--) {
        __asm__("nop");
    }
}

void blink() {
    // Set PA1, PA14, and PB0 HIGH using bitwise OR
    GPIOA_ODR |= (1 << 1) | (1 << 14);
    GPIOB_ODR |= (1 << 0);
    delay(800000);

    // Set PA1, PA14, and PB0 LOW using bitwise AND with NOT mask
    GPIOA_ODR = ~GPIOA_ODR;
    GPIOB_ODR = ~GPIOB_ODR;
    delay(800000);
}
