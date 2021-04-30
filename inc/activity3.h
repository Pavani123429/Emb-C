/**
 * @file actiivty3.h
 * @author 260876 (you@domain.com)
 * @brief Display the output of the temperature sensor
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY_2_
#define __ACTIVITY_2_
#include<avr/io.h>
/**
 * @brief Function definition
 * 
 * @param temp_value 
 * @return char
 */
char OutPWM(uint16_t temp_value);
void InitPWM(void);
#endif