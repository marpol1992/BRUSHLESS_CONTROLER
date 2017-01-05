/*
 * brushless.c
 *
 * Created: 05.01.2017 17:45:49
 *  Author: marek
 */ 
#include "brushless.h"
void brushless_init(void){
/***************PWM*******************/
	TCD0.CTRLB	=	TC_TC0_WGMODE_SINGLESLOPE_gc;
	TCD0.CTRLA	=	TC_TC0_CLKSEL_DIV64_gc;
	TCD0.PER	=	255;
		
/**** TCD0.CTRLA = TC0_CCXEN_bm	
/*************************************/

/*************COMPARATOR**************/
	ACA.AC0CTRL		=	AC_INTMODE_BOTHEDGES_gc | AC_INTLVL_LO_gc | AC_HYSMODE_LARGE_gc| AC_ENABLE_bm;			// w³¹czenie komparatora i histereza
/****USTAWIC NEG i POS komparatora*/

/****USTAWIENIE WYJ******/
	U_TR_G_USTAW;
	V_TR_G_USTAW;
	W_TR_G_USTAW;
	U_TR_D_USTAW;
	V_TR_D_USTAW;
	W_TR_D_USTAW;
	
	U_TR_G_LOW;
	V_TR_G_LOW;
	W_TR_G_LOW;
	U_TR_D_LOW;
	V_TR_D_LOW;
	W_TR_D_LOW;
	
	TCD0.CCA	=	PWM_MIN;
	TCD0.CCB	=	PWM_MIN;
	TCD0.CCC	=	PWM_MIN;
	
	WYLACZ_TRANZYSTORY;
}