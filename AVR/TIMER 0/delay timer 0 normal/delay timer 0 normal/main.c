/*
 * delay timer 0 normal.c
 *
 * Created: 23/9/2025 5:12:39 PM
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
void delay_1s(void)
{
	int i;
	int count=62500;
	for(i=0;i<<count;i++)
	{
		TCNT0=0;
		TCCR0A=0;
		TCCR0B|=(1<<CS00);
		TIFR0|=(1<<TOV0);//MAKE TIMER OVERFLOW FLAG 0
		while(!(TIFR0&(1<<TOV0)));//WATING TIMER OVER FLOW TO SET SO THAT WE GET 16US DELAY
		
	}
}

int main(void)
{
  DDRB|=(1<<DDB5);
    while (1) 
    {
		PORTB^=(1<<PORTB5);
		delay_1s();
    }
}

