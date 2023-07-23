#include "reg52.h"
#include "int1Init.h"

void Int1Init()		//"interrupt 2"
{
	IT1=1;
	EX1=1;
	EA=1;
}