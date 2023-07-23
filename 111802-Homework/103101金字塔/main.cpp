#include <stdio.h>

int main()
{
    int x;
    int i, j, k;

    scanf("%d", &x);
    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= x - i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= (i * 2 - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
