/*************************************************************/
/*************************************************************/
/*******************   Author: Zaher Mohamed  ****************/
/*******************   Date: 20/10/2021       ****************/
/*******************   Layer: MCAL            ****************/
/*******************   Version: 1.00          ****************/
/*************************************************************/
/*************************************************************/

#include "STD_TYPES.h"

#include "PORT_config.h"
#include "PORT_interface.h"
#include "PORT_reg.h"
#include "PORT_private.h"



void PORT_voidInt(void)
{
	DDRA=PORTA_DIR;
	DDRB=PORTB_DIR;
	DDRC=PORTC_DIR;
	DDRD=PORTD_DIR;
	
	PORTA=PORTA_VAL;
	PORTB=PORTB_VAL;
	PORTC=PORTC_VAL;
	PORTD=PORTD_VAL;
}
