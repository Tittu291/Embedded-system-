/*
 * Project -8  Moter bidirection with L293D IC.c
 *
 * Created: 15/9/2025 11:53:06 AM
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
   DDRB|=(1<<DDB5);
   DDRB|=(1<<DDB4);
    while (1) 
    {
		PORTB|=(1<<PORTB5);//port b5 on it means set one
		PORTB&=~(1<<PORTB4);//port b4 off it means set zero
	    _delay_ms(3000);
	   PORTB&=~(1<<PORTB5);// b5 off
	   PORTB&=~(1<<PORTB4);//b4 off
	  _delay_ms(2000);
	  PORTB&=~(1<<PORTB5);
	  PORTB|=(1<<PORTB4);
	  _delay_ms(2000);
	   PORTB&=~(1<<PORTB5);
	   PORTB&=~(1<<PORTB4);
	   _delay_ms(2000);
    }
}

