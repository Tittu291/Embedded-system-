/*
 * Timer 0 ctm.c
 *
 * Created: 23/9/2025 10:22:54 PM
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
   DDRB|=(1<<DDB5);
   TCCR0A|=(1<<WGM01);//CTC MODE
   OCR0A=200;//SET POIN EQUAL TO 200
   TCNT0=0;//INTIAL VALUE OF TIME IS 0
   TCCR0B|=(1<<CS00);//NO PRESCALING
   TIFR0|=(1<<OCF0A);//WRITING 1 TO OCF0A BIT OF TIFR0 REEGISTER TO RESET IT 
    while (1) 
    {
	PORTB^=(1<<PORTB5);
	for (long int i=0;i<160000;i++)
	{
		while(!(TIFR0&(1<<OCF0A)))
		{
			
		}
		 TIFR0|=(1<<OCF0A);
	}
		
    }
}

