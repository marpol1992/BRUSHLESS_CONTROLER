/*
 * brushless.c
 *
 * Created: 05.01.2017 17:45:49
 *  Author: marek
 */ 
#include "config.h"
#include <avr/interrupt.h>

void brushless_init(void){
/***************PWM*******************/
	TCD0.CTRLB	=	TC_TC0_WGMODE_SINGLESLOPE_gc;
	TCD0.CTRLA	=	TC_TC0_CLKSEL_DIV64_gc;
	TCD0.PER	=	255;
		
/**** TCD0.CTRLA = TC0_CCXEN_bm	
/*************************************/

/*************COMPARATOR**************/
	ACA.AC0CTRL		=	AC_INTMODE_BOTHEDGES_gc | AC_INTLVL_LO_gc | AC_HYSMODE_LARGE_gc| AC_ENABLE_bm;			// w³¹czenie komparatora i histereza
/****SETIC NEG i POS komparatora*/

/****SETIENIE WYJ******/
	U_H_SET;
	V_H_SET;
	W_H_SET;
	U_L_SET;
	V_L_SET;
	W_L_SET;
	
	U_H_LOW;
	V_H_LOW;
	W_H_LOW;
	U_L_LOW;
	V_L_LOW;
	W_L_LOW;
	
	TCD0.CCA	=	PWM_MIN;
	TCD0.CCB	=	PWM_MIN;
	TCD0.CCC	=	PWM_MIN;
	
	WYLACZ_TRANZYSTORY;
}