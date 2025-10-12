/*
 * tittu.c
 *
 * Created: 5/10/2025 12:24:40 PM
 *  Author: LENOVO
 */ 
#define F_CPU 16000000UL
#include<avr/io.h>
void timer0_init(void)
{
	TCCR0A|=(1<<WGM01);//CTC MODE
	OCR0A=249;//FOR COUNT 250 SET POINT
	TCNT0=0;//MAKING TIMER COUNTER 0 
	TCCR0B|=(1<<CS00);
	TCCR0B|=(1<<CS01);//PRESCALER 64
	TIFR0|=(1<<OCF0A);//SETTING FLAG TO 0 BY WRITING ONE 
	
}
void tittu(uint16_t ms)
{
    timer0_init();
	while(ms--)//CREATES DELAY FOR" MS "MILLISECOND
	{
	  while(!(TIFR0&(1<<OCF0A)))	//1MS LOOP
	  {
		  
	  }
	  TIFR0|=(1<<OCF0A);
	}
}