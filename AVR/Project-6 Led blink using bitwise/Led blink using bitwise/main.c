/*
 * Led blink using bitwise.c
 *
 * Created: 14/9/2025 10:20:42 PM
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	
DDRB|=(1<<DDB5);//
   
    while (1) 
    {
		PORTB|=(1<<PORTB5); 
    }
}

