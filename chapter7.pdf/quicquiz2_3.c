#include <stdio.h>
int main(){
int x;
 int a=5;
 int *ptr1=&a;
 int *ptr2=&a;
ptr2=ptr2+0;

x=ptr1-ptr2;

printf(" %d\n",x);




    return 0;
}