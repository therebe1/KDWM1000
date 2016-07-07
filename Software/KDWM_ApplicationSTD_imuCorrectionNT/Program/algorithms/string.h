/* #include "algorithms\string.h" */

#ifndef __STRING_H
#define __STRING_H

#include "stm32f4xx.h"
/*====================================================================================================*/
/*====================================================================================================*/
typedef enum {
  Type_B = 2,   // 無號數二進制
  Type_O = 8,   // 無號數八進制
  Type_D = 10,  // 無號數十進制
  Type_H = 16,  // 無號數十六進制
  Type_I = 0,   // 有號數
  Type_F = 1,   // 浮點數
} StringType;
/*====================================================================================================*/
/*====================================================================================================*/
void     num2Str( StringType type, uint8_t lens, char *pStr, int32_t number );
uint16_t lenOfStr( char *pStr );
/*====================================================================================================*/
/*====================================================================================================*/
#endif
