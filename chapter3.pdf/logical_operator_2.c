//VIP PASS      


#include <stdio.h>
int main()
{

    int age;
    int vippass = 1;

    printf("enter your age \n");
    scanf("%d", &age);

    if (age <= 50 && age >= 18 || vippass == 1)
    {
        printf("you are above 18 and below 50, you can drive\n");
    }
    else
    {
        printf("yiu can not drive\n");
    }

    return 0;
}