
## Code 

#include <avr/io.h>

int main(void)
{

    //Set B0 as output and initialize it to output low
    DDRB|=(1<<PB0);
    PORTB&=~(1<<PB0);

    //Set B1 as INPUT and initialize it to output HIGH
    DDRB&=~(1<<PB1);
    PORTB|=(1<<PB1);

    //Set B2 as INPUT and initialize it to output HIGH
    DDRB&=~(1<<PB2);
    PORTB|=(1<<PB2);
    while(1)
    {
        if(! (PINB & (1<<PB1)) && !(PINB&(1<<PB2)))
             PORTB|=(1<<PB0);
        else
            PORTB&=~(1<<PB0);

    }

    return 0;
}
