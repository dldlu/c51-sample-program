#include "int0.h"
#include "delay.h"
#include "led.h"

u8 j;

void Int0() interrupt 0
{
	if(key == 0)
	{
		delay_ms(100);
		if(key == 0) 
		{
			for(j = 0; j < 20; j++)
			{
				led1 = ~led1;
				delay_ms(300);
			}
			j = 0;
		}
	}	
}