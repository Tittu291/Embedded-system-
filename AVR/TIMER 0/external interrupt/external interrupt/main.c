/*
 * external interrupt.c
 *
 * Created: 3/10/2025 8:52:19 PM
 * Author : LENOVO
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
ISR(INT0_vect)
{
	PORTB^=(1<<PORTB5);//TOGGLING PORTB5
	_delay_ms(10000);
}

int main(void)
{
  DDRD&=~(1<<DDD2);//MAKING PD2 AS INPUT.
  DDRB|=(1<<DDB5);//MAKING PB5 AS OUTPUT
  DDRB|=(1<<DDB4);//pb4 has out put
  PORTD|=(1<<PORTD2);//ENABLE INTERNAL PULL UP TO MAKE PD2 NORMALLY HIGH
  EIMSK|=(1<<INT0);//ENABLE INT0 AT EIMSK REGISTER
  EICRA |=(1<<ISC01);//ENABLE FALLING EDGE DETECTION IN EICRA REGISTER
  sei();//ENABLING GLOBAL INTERRUPT AT SREG
    while (1) 
    {
	PORTB^=(1<<PORTB4);
	_delay_ms(2000);
    }
}

