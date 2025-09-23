/*
 * ctc mode 5 sec delay pre 64.c
 *
 * Created: 24/9/2025 12:39:55 AM
 * Author : LENOVO
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
	DDRB|=(1<<DDB5);
	TCNT0=0;
	
	TCCR0A|=(1<<WGM00);
	OCR0A=200; 
	TCCR0B|=(1<<CS00);
	TCCR0B|=(1<<CS01); 
	TIFR0|=(1<<OCF0A); 
	
	while (1)
	{
		PORTB^=(1<<PORTB5);
		for (long int i=0; i<4883; i++)
		{
			while (!(TIFR0&(1<<OCF0A)))
			{
				
			}
			TIFR0|=(1<<OCF0A);
		}
		
	}
}