Lists in C programming

Program 1:

A program to print numbers from 1 to 10 and vice versa using a list called list.

```
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
```


Output:

![image](https://user-images.githubusercontent.com/124895858/221869987-88551abd-60bc-4ab2-b936-e1ec2e2b6121.png)

Program 2:

A program that prints the powers of 2 being exponents 1-10.

```
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
```


Output:


![image](https://user-images.githubusercontent.com/124895858/221870789-6082a58a-71bf-4c6c-a011-de5fd8fc13ba.png)
