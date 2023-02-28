#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
        int i,list[100];
        for(i = 1; i <= 10; i++)
        {
                list[i]=pow(2,i);
        }
        for(i = 1; i <= 10 ; i++)
        {
                printf("%d) %d\n",i,list[i]);
        }
}
