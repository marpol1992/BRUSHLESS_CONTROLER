/*
 * brushless.h
 *
 * Created: 05.01.2017 15:15:30
 *  Author: marek
 */ 


#ifndef BRUSHLESS_H_
#define BRUSHLESS_H_

/**********************  PWM  ******************************************/


/********************* FAZA U **************************************/

/*******TRANZYSTOR_GORNY********************************************/

#define U_TR_G_USTAW    PORTD.DIRSET	=	PIN0_bm;
#define U_TR_G_LOW		PORTD.OUTCLR	=   PIN0_bm;
#define U_TR_G_ON		TCD0.CTRLB = |TC0_CCAEN_bm;	
#define U_TR_G_OFF		TCD0.CTRLB &= ~TC0_CCAEN_bm;	
#define U_TR_G_STAN		(PORTD.IN & PIN0_bm);

/******TRANZYSTOR_DOLNY*********************************************/

#define U_TR_D_USTAW    PORTD.DIRSET	=	PIN4_bm;
#define U_TR_D_LOW		PORTD.OUTCLR	=   PIN4_bm;
#define U_TR_D_ON		PORTD.OUTSET	=	PIN4_bm;
#define U_TR_D_OFF		PORTD.OUTCLR	=   PIN4_bm;
#define U_TR_D_STAN		(PORTD.IN & PIN4_bm);

/********************* FAZA V **************************************/
/*******TRANZYSTOR_GORNY********************************************/
#define V_TR_G_USTAW    PORTD.DIRSET	=	PIN1_bm;
#define V_TR_G_LOW		PORTD.OUTCLR	=   PIN1_bm;
#define V_TR_G_ON		TCD0.CTRLB = |TC0_CCBEN_bm;
#define V_TR_G_OFF		TCD0.CTRLB &= ~TC0_CCBEN_bm;
#define V_TR_G_STAN		(PORTD.IN & PIN1_bm);

/******TRANZYSTOR_DOLNY*********************************************/

#define V_TR_D_USTAW    PORTD.DIRSET	=	PIN5_bm;
#define V_TR_D_LOW		PORTD.OUTCLR	=   PIN5_bm;
#define V_TR_D_ON		PORTD.OUTSET	=	PIN5_bm;
#define V_TR_D_OFF		PORTD.OUTCLR	=   PIN5_bm;
#define V_TR_D_STAN		(PORTD.IN & PIN5_bm);

/********************* FAZA W **************************************/
/*******TRANZYSTOR_GORNY********************************************/
#define W_TR_G_USTAW    PORTD.DIRSET	=	PIN2_bm;
#define W_TR_G_LOW		PORTD.OUTCLR	=   PIN2_bm;
#define W_TR_G_ON		TCD0.CTRLB = |TC0_CCCEN_bm;
#define W_TR_G_OFF		TCD0.CTRLB &= ~TC0_CCCEN_bm;
#define W_TR_G_STAN		(PORTD.IN & PIN2_bm);

/******TRANZYSTOR_DOLNY*********************************************/

#define W_TR_D_USTAW    PORTD.DIRSET	=	PIN6_bm;
#define W_TR_D_LOW		PORTD.OUTCLR	=   PIN6_bm;
#define W_TR_D_ON		PORTD.OUTSET	=	PIN6_bm;
#define W_TR_D_OFF		PORTD.OUTCLR	=   PIN6_bm;
#define W_TR_D_STAN		(PORTD.IN & PIN6_bm);

//--- D E F I N I C J E   K O M P A R A T O R A ----
#define KOMP_KANAL_U		AC_MUXPOS_PIN6_gc |	AC_MUXNEG_PIN0_gc;//kana³ U do pomiaru BEMF
#define KOMP_KANAL_V		AC_MUXPOS_PIN6_gc |	AC_MUXNEG_PIN1_gc;//kana³ V do pomiaru BEMF
#define KOMP_KANAL_W		AC_MUXPOS_PIN6_gc |	AC_MUXNEG_PIN3_gc;//kana³ W do pomiaru BEMF


#endif /* BRUSHLESS_H_ */