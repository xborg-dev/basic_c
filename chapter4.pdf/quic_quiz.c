/*  #include <stdio.h>
int main()
{

    int i = 0;
    int n;
    printf("enter the value of n \n");
    scanf("%d", &n);

    do
    {
        printf("the number is %d \n", i + 1);

        i++;
    } while (i < n);

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{

    int i = 0, n;
    printf("enter the value of n \n");
    scanf("%d", &n);

    while (i < n)
    {
        printf("the number is %d \n", i + 1);

        i++;
    }

    return 0;
}  */
// using for loop..

#include <stdio.h>
int main()
{

    int i, n;
    printf("enter the value of n \n");
    scanf("%d", &n);


    for (i = 0; i < n; i++)
    {

        printf("the value of i is %d \n", i+1 );
    }

    return 0;
}
