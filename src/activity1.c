


/**
 * @file activity.c
 * @author 260876 (you@domain.com)
 * @brief Chanfes the state of LED
 * @version 0.1
 * @date 2021-04-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
// include files
#include "activity1.h"

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void InitLED(){
    
//Set B0 as output and initialize it to output low

     DDRB|=(1<<PB0);
    PORTB&=~(1<<PB0);

//Set B1 as INPUT and initialize it to output HIGH
  
    DDRB&=~(1<<PB1);
    PORTB|=(1<<PB1);

//Set B2 as INPUT and initialize it to output HIGH
    
    DDRB&=~(1<<PB2);
    PORTB|=(1<<PB2);
    }
   
        void ledon(void)
{
    LED_PORT|=(1<<LED_PIN);
}
void ledoff(void)
{
    LED_PORT&=~(1<<LED_PIN);
}
    