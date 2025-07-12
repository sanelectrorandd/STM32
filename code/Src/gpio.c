#include "gpio.h"

void delay(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++) {
        for (unsigned int j = 0; j < 1000; j++) {
            __asm__("nop");
        }
    }
}

void blink() {
    // Set PA1, PA14, and PB0 HIGH using bitwise OR
    GPIOA_ODR |= (1 << 1) | (1 << 14);
    GPIOB_ODR |= (1 << 0);
    delay(1000);

    // Set PA1, PA14, and PB0 LOW using bitwise AND with NOT mask
    GPIOA_ODR |= (0 << 1) | (0 << 14); ;
    GPIOB_ODR |= (0 << 0);;
    delay(1000);
}
