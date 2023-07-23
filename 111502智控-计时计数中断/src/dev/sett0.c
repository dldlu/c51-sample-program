#include "setto.h"

void SetT0()
{
	TMOD|=0X01;

	TH0=0XFC;
	TL0=0X18;	
	ET0=1;
	EA=1;
	TR0=1;
}