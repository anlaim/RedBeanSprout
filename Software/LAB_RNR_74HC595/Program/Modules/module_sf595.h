/* #include "module_sf595.h" */

#ifndef __MODULE_SF595_H
#define __MODULE_SF595_H

#include "stm32f10x.h"
/*====================================================================================================*/
/*====================================================================================================*/
void SF595_Config( void );
void SF595_Init( void );
void SF595_Reset( void );
void SF595_OutputEnable( u8 OutputState );
void SF595_Shift( u8 SendData );
void SF595_SendByte( u8 SendData );
/*====================================================================================================*/
/*====================================================================================================*/
#endif