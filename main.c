#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>

#define F_CPU 1000000UL  // 1 MHz

void init() {
	// Set PB0, PB1, PB2 as output (for LED display)
	DDRB |= (1 << PB0) | (1 << PB1) | (1 << PB2);
	
	// Initialize random seed (Fixing 'ADC' error)
	srand(PINB);
}

uint8_t get_random_number() {
	return (rand() % 6) + 1;  // Generate number between 1 and 6
}

void display_dice(uint8_t number) {
	// Predefined dice LED output mapping (PB2-PB0)
	uint8_t dice_patterns[6] = {
		0b001,  // 1
		0b010,  // 2
		0b011,  // 3
		0b100,  // 4
		0b101,  // 5
		0b110   // 6
	};
	
	// Set PORTB output to the correct LED pattern
	PORTB = (PORTB & 0xF8) | (dice_patterns[number - 1] & 0x07);
}

int main(void) {
	init();

	while (1) {
		uint8_t number = get_random_number();
		display_dice(number);
		_delay_ms(1000);  // Wait 1 second before rolling again
	}

	return 0;
}
