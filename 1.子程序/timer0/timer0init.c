#include "reg52.h"
#include "timer0init.h"

void Timer0Init()	//"interrupt 1"
{
	TMOD|=0X01;

	TH0=0XFC;		//"1ms"
	TL0=0X18;	
	ET0=1;
	EA=1;
	TR0=1;
}