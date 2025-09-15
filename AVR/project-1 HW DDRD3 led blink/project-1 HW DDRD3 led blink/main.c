/*
 * HW DDRD3 led Blink
 * Author : Lenova
 * Home work question:Write a program to blink LED Connected to PD3 pin of an ATMEGA 328. Simulate in Siumul ide ?
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD = 0b00001000;
    
    while (1) 
    {
		PORTD = 0b00001000;
		_delay_ms(1000);
		PORTD = 0b00000000;
		_delay_ms(1000);
    }
}

