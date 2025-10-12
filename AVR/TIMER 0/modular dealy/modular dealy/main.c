/*
 * modular dealy.c
 *
 * Created: 5/10/2025 12:07:09 PM
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include"tittu.h"
#include <stdint.h>

int main(void)
{
    DDRB|=(1<<DDB5);
	
    while (1) 
    {
		PORTB^=(1<<PORTB5);
		tittu(2000);
    }
}

