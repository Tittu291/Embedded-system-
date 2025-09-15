/*
 * PRJT-8 HW DC moter bidirection using function.c
 *
 * Created: 15/9/2025 1:26:23 PM
 * Author : LENOVO
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include<util/delay.h>
void cw()
{
	PORTB|=(1<<PORTB5);
	PORTB&=~(1<<PORTB4);
	_delay_ms(3000);
}
void stp()
{
	PORTB&=~(1<<PORTB5);
	PORTB&=~(1<<PORTB4);
	_delay_ms(2000);
}
void ccw()
{
	PORTB&=~(1<<PORTB5);
	PORTB|=(1<<PORTB4);
	_delay_ms(3000);
}
int main(void)
{
    DDRB|=(1<<DDB5);
	DDRB|=(1<<DDB4);
    while (1) 
    {
		cw();//CALL CLOCKWISE
		stp();//call stop
		ccw();//call counter clockwise
		stp();//call stop
    }
}

