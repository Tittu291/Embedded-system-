//using pulldown HOME WORK
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
   DDRB|=(1<<DDB5);
   DDRB|=(1<<DDB4);
   DDRD &=~(1<<DDD2);
   PORTD|=(1<<PORTD2);//ACTIVATE INTERNAL PULLUP
    while (1) 
    {
		if(!(PIND&(1<<PIND2)))
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
		else
		{
				   PORTB&=~(1<<PORTB5);// b5 off
				   PORTB&=~(1<<PORTB4);//b4 off
		}
    }
}
