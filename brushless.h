/*
 * brushless.h
 *
 * Created: 05.01.2017 15:15:30
 *  Author: marek
 */ 


#ifndef BRUSHLESS_H_
#define BRUSHLESS_H_
#include <avr/interrupt.h>
#include <avr/io.h>
/**********************  PWM  ******************************************/
#define PWM_MIN 20;

/********************* FAZA U **************************************/

/*******TRANZYSTOR_GORNY********************************************/

#define U_H_SET    PORTD.DIRSET	=	PIN0_bm;
#define U_H_LOW		PORTD.OUTCLR	=   PIN0_bm;
#define U_H_ON		TCD0.CTRLB |= TC0_CCAEN_bm;
#define U_H_OFF		TCD0.CTRLB &= ~TC0_CCAEN_bm;
#define U_H_STATE		(PORTD.IN & PIN0_bm);

/******TRANZYSTOR_DOLNY*********************************************/

#define U_L_SET  PORTD.DIRSET	=	PIN4_bm;
#define U_L_LOW		PORTD.OUTCLR	=   PIN4_bm;
#define U_L_ON		PORTD.OUTSET	=	PIN4_bm;
#define U_L_OFF		PORTD.OUTCLR	=   PIN4_bm;
#define U_L_STAN		(PORTD.IN & PIN4_bm);

/********************* FAZA V **************************************/
/*******TRANZYSTOR_GORNY********************************************/
#define V_H_SET    PORTD.DIRSET	=	PIN1_bm;
#define V_H_LOW		PORTD.OUTCLR	=   PIN1_bm;
#define V_H_ON		TCD0.CTRLB |= TC0_CCBEN_bm;
#define V_H_OFF		TCD0.CTRLB &= ~TC0_CCBEN_bm;
#define V_H_STAN		(PORTD.IN & PIN1_bm);

/******TRANZYSTOR_DOLNY*********************************************/

#define V_L_SET    PORTD.DIRSET	=	PIN5_bm;
#define V_L_LOW		PORTD.OUTCLR	=   PIN5_bm;
#define V_L_ON		PORTD.OUTSET	=	PIN5_bm;
#define V_L_OFF		PORTD.OUTCLR	=   PIN5_bm;
#define V_L_STAN		(PORTD.IN & PIN5_bm);

/********************* FAZA W **************************************/
/*******TRANZYSTOR_GORNY********************************************/
#define W_H_SET    PORTD.DIRSET	=	PIN2_bm;
#define W_H_LOW		PORTD.OUTCLR	=   PIN2_bm;
#define W_H_ON		TCD0.CTRLB |= TC0_CCCEN_bm;
#define W_H_OFF		TCD0.CTRLB &= ~TC0_CCCEN_bm;
#define W_H_STAN		(PORTD.IN & PIN2_bm);

/******TRANZYSTOR_DOLNY*********************************************/

#define W_L_SET    PORTD.DIRSET	=	PIN6_bm;
#define W_L_LOW		PORTD.OUTCLR	=   PIN6_bm;
#define W_L_ON		PORTD.OUTSET	=	PIN6_bm;
#define W_L_OFF		PORTD.OUTCLR	=   PIN6_bm;
#define W_L_STAN		(PORTD.IN & PIN6_bm);
/****WY£ACZ TRANZYSTORY****/
#define WYLACZ_TRANZYSTORY U_H_OFF; V_H_OFF; W_H_OFF;  U_L_STAN;  V_L_STAN; W_L_STAN;
//--- D E F I N I C J E   K O M P A R A T O R A ----
#define KOMP_KANAL_U		ACA.AC0MUXCTRL	= AC_MUXPOS_PIN6_gc |	AC_MUXNEG_PIN0_gc;//kana³ U do pomiaru BEMF
#define KOMP_KANAL_V		ACA.AC0MUXCTRL	= AC_MUXPOS_PIN6_gc |	AC_MUXNEG_PIN1_gc;//kana³ V do pomiaru BEMF
#define KOMP_KANAL_W		ACA.AC0MUXCTRL	= AC_MUXPOS_PIN6_gc |	AC_MUXNEG_PIN3_gc;//kana³ W do pomiaru BEMF




void brushless_init(void);
#endif /* BRUSHLESS_H_ */