// if _else if_else if_else if_......else ladder//

#include <stdio.h>
int main()
{

    int number;
    printf("enter your number \n");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("your number is 1\n");
    }
    else if (number == 2)
    {
        printf("your number is 2\n");
    }

    else if (number == 3)
    {
        printf("your number is 3\n");
    }

    else
    {
        printf("its not 1,2 or 3 \n");
    }

    return 0;
}