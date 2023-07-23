#include "switch.h"
#include "delay.h"

void KeyDown()
{
	k1 = 1; k2 = 1;


	k3 = 0;
	if(k1 == 0)
	{
		delay_ms(100);
		if(k1 == 0)
			LED1 = ~LED1;
	}
	if(k2 == 0)
	{
		delay_ms(100);
		if(k2 == 0)
			LED3 = ~LED3;
	}
	k3 = 1;


	k4 = 0;
	if(k1 == 0)
	{
		delay_ms(100);
		if(k1 == 0)
			LED2 = ~LED2;
	}
	if(k2 == 0)
	{
		delay_ms(100);
		if(k2 == 0)
			LED4 = ~LED4;
	}
	k4 = 1;		
}