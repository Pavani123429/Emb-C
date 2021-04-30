#ifndef _ACTIVITY_1_
#define _ACTIVITY_1_


/**
 * @file blinky.h
 * @author 260876 ()
 * @brief Activity_1
 * @version 0.1
 * @date 2021-04-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */



/**
 * Include files
 */ 
#include <avr/io.h>
#include "activity1.h"

//Macro definition 

#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */


#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define SENSOR_ON !(PINB&(1<<PB2)) // Switch1 ON
#define HEAT_ON !(PINB&(1<<PB2)) // Switch2 ON

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */

void ledon(void);
void ledoff(void);
void InitLED();

#endif /**  _ACTIVITY_1_*/