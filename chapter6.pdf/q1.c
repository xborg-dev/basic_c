// basic declaration of a pointer

#include <stdio.h>

int main()
{

    int f = 10, *a;
    a = &f;

    printf("The adresss of f is %u \n", a);

    printf("The value of f is %u \n", *a);

    return 0;
}