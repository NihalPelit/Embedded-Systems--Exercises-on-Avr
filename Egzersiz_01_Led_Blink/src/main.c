#define F_CPU 16000000UL  // 16 MHz Arduino Uno hızı
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRB |= 0b11111111;   // Arduino üzerindeki ledleri çıkış yapıyoruz

    while(1) {
        PORTB |= 0b00100100;  // LED'i yak
        _delay_ms(500);
        PORTB &= ~0b00100100; // LED'i söndür
        _delay_ms(500);
        PORTB |= 0b00010010;
        _delay_ms(500);
        PORTB &= ~0b00010010;
        _delay_ms(500);
    }
    return 0;
}

