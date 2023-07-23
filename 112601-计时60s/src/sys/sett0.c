#include "sett0.h"

void SetT0()
{
	TMOD|=0X01;

	TH0=0xd8;
	TL0=0xf0;	
	ET0=1;
	EA=1;
	TR0=1;
}