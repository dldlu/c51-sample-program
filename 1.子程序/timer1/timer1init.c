#include "reg52.h"
#include "timer1init.h"

void Timer1Init()		//"interrupt 3"
{
	TMOD|=0X10;

	TH1=0XFC;		//"1ms"
	TL1=0X18;	
	ET1=1;
	EA=1;
	TR1=1;
}