#include <stdio.h>
int main()
{

    printf("sum of multiplicaton table of 8 \n");
int sum=0;

    for (int i = 1; i <= 10; i++)
    {
sum =sum+8*i;
       printf("(8 x %d) = %d+", i, sum )

        ;
    }

    return 0;
}