/*
 * Brushless_controler.h
 *
 * Created: 01.02.2017 23:40:20
 *  Author: marek
 */ 


#ifndef BRUSHLESS_CONTROLER_H_
#define BRUSHLESS_CONTROLER_H_

typedef enum{
	BLDC_ERROR = 0,
	BLDC_OK
}BLDC_RET_TYPE;

typedef enum{
	START_BLDC = 1,
	WORKING_BLDC,
	STOP_BLDC	
}OPERATING_MODE;

typedef enum{
	KOMUT_1 = 1,
	KOMUT_2,
	KOMUT_3,
	KOMUT_4,
	KOMUT_5,
	KOMUT_6	
}KOMUT_COUNTER;

typedef struct{
	OPERATING_MODE operating_mode;
	KOMUT_COUNTER komut_counter;
	uint8_t PWM;
}BLDC_Object;

BLDC_RET_TYPE BLDC_start(BLDC_Object *_obj);
BLDC_RET_TYPE BLDC_back_EMF(BLDC_Object *_obj);


#endif /* BRUSHLESS_CONTROLER_H_ */