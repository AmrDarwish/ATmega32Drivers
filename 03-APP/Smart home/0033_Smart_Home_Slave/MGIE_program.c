/*
 * MGIE_program.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Amr-a
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "MGIE_interface.h"
#include "MGIE_register.h"

void MGIE_voidEnable(void){
	SET_BIT( SREG ,SREG_I);
}
void MGIE_voidDisable(void){
	CLR_BIT( SREG ,SREG_I);

}
