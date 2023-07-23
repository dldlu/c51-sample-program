#include "reg52.h"
#include "led.h"
#include "delay.h"
#include "int0.h"
#include "setint0.h"

void main()
{

	while(1) 
	{
		SetInt0();
		Led();
	}

	
}

