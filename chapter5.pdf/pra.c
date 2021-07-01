#include <stdio.h>
sum(int n)

{
    if (n != 0)
        return n*(n+1)/2;
}

int main()
{
    int no;

    printf(" enter how many terms of no you want to input \n ");

    scanf("%d", &no);
    printf("sum of %dth number of natural number is %d\n ", no, sum(no));

    return 0;
}
