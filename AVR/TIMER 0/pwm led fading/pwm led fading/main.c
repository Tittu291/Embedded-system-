/*
 * pwm led fading.c
 *
 * Created: 2/10/2025 6:22:24 PM
 * Author : LENOVO
 */ 

/*
 * pwm led fading.c
 *
 * Created: 2/10/2025 6:22:24 PM
 * Author : LENOVO
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
	int i;
	DDRD|=(1<<DDD6);//out put
	TCCR0A|=(1<<WGM00);//
	TCCR0A|=(1<<WGM01);
	TCCR0A|=(1<<COM0A1);
	TCCR0B|=(1<<CS00);//prescaler 64
	TCCR0B|=(1<<CS01);//prescaler
	OCR0A=0;
		while (1)
		{
			
			for (i=0; i<=255; i++)
			{
				OCR0A++;
				_delay_ms(10);
			}
			
			for (i=255; i>=0; i--)
			{
				OCR0A--;
				_delay_ms(10);
			}
		}
	}
