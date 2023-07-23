#include "reg52.h"
#include "int0init.h"

void Int0init()		//"interrupt 0"
{
	IT0=1;
	EX0=1;
	EA=1;
}