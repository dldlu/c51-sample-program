#include "led.h"
#include "delay.h"

u16 k;
void Led()
{
	for(k = 0; k < 10; k++)
	{
		led1 = ~led1;
		delay_ms(1000);
	}	
}
