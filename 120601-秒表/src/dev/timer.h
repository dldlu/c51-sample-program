#include "timer.h"

unsigned char ssec;
unsigned char sec;
unsigned char min;

void timer() interrupt 1
{
	TH0=0Xd8;		//"10ms"
	TL0=0Xf0;
	ssec++
	if(ssec >= 100)
	{
		ssec = 0;
		sec++;
		if(sec >= 60)
		{
			sec = 0;
			min++;
			if(min >= 60)
			{
				min = 0;
			}
		}
	}
}