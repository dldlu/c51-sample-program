#include "t0.h"

void toT0() interrupt 1
{
	u16 i;
	TH0=0XFC;
	TL0=0X18;
	i++;
	if(i == 3000)
	{
		i = 0;
		led1 = ~led1;	
	}	
}