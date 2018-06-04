/*
 * P10C.c
 *
 * Created: 5/30/2018 12:36:36 PM
 *  Author: Letty
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 1000000ul;



int contadorPulsos = 0;
int main(void)
{	
	DDRA = 0x00;
	DDRB = 0x01;
	PORTA = 0x00;
	
		
	while(1){
		encenderLed();
	}
	
}

void encenderLed(){
	if (PINB0 == 0x01){
		contadorPulsos++;
		if(contadorPulsos == 5){
			PORTA = 0x01;
			_delay_ms(5000);
			PORTA = 0X00;
		    contadorPulsos = 0;
		}
	}
}
