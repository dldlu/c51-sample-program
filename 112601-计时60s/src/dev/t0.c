#include "t0.h"

void toT0() interrupt 1
{

	TH0=0xd8;
	TL0=0xf0;
	ssec++;
	if(ssec>=100)   //1s
	{
		ssec=0;
		sec++;
		if(sec>=60)
			sec=0;
	}
}