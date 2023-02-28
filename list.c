#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
        int i,list[100];
        for(i=1;i<=10;i++)
        {
                list[i]=i;
        }
        for(int i=1;i<=10;i++)
        {
                printf("%d) %d\n",i,list[i]);
        }
        printf("\n\n");
        for(i=1;i<=10;i++)
        {
                list[i]=11-i;
        }
        for(i=1;i<=10;i++)
        {
                printf("%d) %d\n",i,list[i]);
        }
}
