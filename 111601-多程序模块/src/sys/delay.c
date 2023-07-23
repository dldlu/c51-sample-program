#include "delay.h"

void delay_ns(u16 s)
{
    u16 i=0,j=0;
    for(i=0;i<s;i++)
        for(j=0;j<123;j++);
}


void delay_ms(u16 s)
{
    u16 i=0,j=0;
    for(i=0;i<s;i++)
        for(j=0;j<123;j++);
}