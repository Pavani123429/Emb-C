
#include <avr/io.h>
#include"activity1.h"

//Set B0 as output and initialize it to output low
//Set B1 as INPUT and initialize it to output HIGH
//Set B2 as INPUT and initialize it to output HIGH
int main(void)
{
	activity1_init();
	while (1)
	{
		activity1_loop();		/* code */
	}
	return 0;
}
