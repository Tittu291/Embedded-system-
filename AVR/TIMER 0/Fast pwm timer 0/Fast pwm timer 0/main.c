/*
 * Fast pwm timer 0.c
 *
 * Created: 1/10/2025 7:50:26 PM
 * Author : LENOVO
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
   DDRD|=(1<<DDD6);//out put
   TCCR0A|=(1<<WGM00);//
   TCCR0A|=(1<<WGM01);
   TCCR0A|=(1<<COM0A1);
   TCCR0B|=(1<<CS00);//prescaler 64
   TCCR0B|=(1<<CS01);//prescaler
   	OCR0A=0;
    while (1) 
    {

	}
}

