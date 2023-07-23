#include "delay.h"

void delay_ms(u16 n)
{
    u16 i=0,j=0;
    for(i=0;i<n;i++)
        for(j=0;j<123;j++);
}