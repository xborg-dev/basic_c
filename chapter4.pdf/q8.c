#include <stdio.h>
int main (){

int i=0,n=7,factorial=1;

for(i=1;i<=n;i++)
{
    factorial*=i  ;     //factorial=  factorial * i
}
printf ("the value of factorial 7 is %d",factorial);

    return 0;
}