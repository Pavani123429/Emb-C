/**
 * @file activity2.h
 * @author 260876(you@domain.com)
 * @brief ADC function definition
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ACTIVITY_2_
#define _ACTIVITY_2_
/**
 * @brief Reading the analog input and returning a digital 8bit value
 * 
 * @param ch 
 * @return uint16_t 
 */
#include <avr/io.h>
#include "activity2.h"
uint16_t ReadADC(uint8_t ch);
void InitADC();
#endif