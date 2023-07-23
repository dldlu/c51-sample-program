#include "reg52.h"
#include "timer0init.h"

void Timer0Init()	//"interrupt 1"
{
	TMOD|=0X01;

	TH0=0Xd8;		//"10ms"
	TL0=0Xf0;	
	ET0=1;
	EA=1;
	TR0=1;
}