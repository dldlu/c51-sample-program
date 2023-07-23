#include "nixled.h"
#include "sett0.h"


void main()
{
	SetT0();
	while(1)
	{
		GetTime();
		NixLed();
	}	
}