/*
 * project 7 bitwise led blink with delay.c
 *
 * Created: 14/9/2025 11:51:04 PM
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB|=(1<<DDB5);
    while (1) 
    {
		PORTB|=(1<<PORTB5);//ENABLE BY USING OR SET ONE
		_delay_ms(1000);
		PORTB&=~(1<<PORTB5);//DESABLE BY USING AND and COMPLIMENT SET 0
		_delay_ms(1000);
    }
}

