/*
 * BRUSHLESS_CONTROLER.c
 *
 * Created: 05.01.2017 15:08:53
 * Author : marek
 */ 

#include <avr/io.h>
#include "config.h"
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void)
{
    /* Replace with your application code */
	brushless_init();
	PMIC.CTRL         =    PMIC_LOLVLEN_bm;       // w³¹czenie przerwañ o priorytecie LO
	sei();
    while (1) 
    {
		U_L_ON;
		U_H_ON;
		V_L_ON;
		V_H_ON;
		W_H_ON;
		_delay_ms(5000);
		U_L_OFF;
		U_H_OFF;
		V_L_OFF;
		V_H_OFF;
		W_H_OFF;
		_delay_ms(5000);
    }
}

