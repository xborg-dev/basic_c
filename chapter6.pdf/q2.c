// A c program to demonstrate the use of &(address) and *(value of address) operator

#include <stdio.h>
int main(){

int a=10;
float b=2.6;
char c='z';

int *pt1; float *pt2; char *pt3;
pt1=&a;
pt2=&b;
pt3=&c;

printf("a=%d\n",a);
printf("b=%f\n",b);
printf("c=%c\n",c);
printf("using & operator \n");

printf("address of a =%u \n",&a);
printf("address of b =%u \n",&b);
printf("address of c =%u \n",&c);

printf("using & and * operator \n");

printf("value of a =%d \n",*(&a));
printf("value of b =%f \n",*(&b));
printf("value of c =%c \n",*(&c));

printf("using only pointer variable \n");

printf("address of a is %d \n",pt1);
printf("address of b is %d \n",pt2);
printf("address of c is %d \n",pt3);

printf("using only pointer operator \n");

printf("value of a is %d \n",*pt1);
printf("value of b is %f \n",*pt2);
printf("value of c is %c \n",*pt3);




    return 0;
}

