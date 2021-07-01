#include <stdio.h>
int Fbn(int x);
int main()
{

    int n,m=0,i;


    printf("enter the total terms n\n");
    scanf("%d", &n);
    printf("fbn series terms are  \n");
    for(i=1;i<=n;i++){
        printf("%d\n",Fbn(m));
        m++;
    }

    return 0;
}

int Fbn(int x)
{
    if (x == 0 || x == 1)

        return x;

    else

        return (Fbn(x - 1) + Fbn(x - 2));
}