/*
 * Timer overflow interrupt.c
 * Created: 7/10/2025 6:42:15 PM
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include<avr/interrupt.h>
#include<stdint.h>
uint16_t count=0;
ISR(TIMER0_OVF_vect)//INTERRUPT SERVICE ROUTINE(ISR) (TIMER0_OVF_vect=interrupt vector table"address" for timer overflow
{
	count++;
	if(count>=977)
	{
		PORTB^=(1<<PORTB5);
		count=0;
	}
	
}
int main(void)
{
    DDRB|=(1<<DDB5);//SET AS OUTPUT
	//TCNT0=0;
	TCCR0A=0;//NORMAL MODE
	TCCR0B|=(1<<CS00)|(1<<CS01);//64 PRESCALER
	TIMSK0|=(1<<TOIE0);//ENABLING TIMER OVERFLOW INTERRUPT FOR TIMER 0 IN NORMAL MODE
	sei();
	
    while (1) 
    {
		
    }
}

