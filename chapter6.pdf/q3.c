//add two number using pointer 
#include<stdio.h>
int main (){
int a,b;
int *n1,*n2;
int sum;
n1=&a;
n2=&b;


printf ("enter the value of a \n");
scanf("%d",&a);
printf ("enter the value of b \n");
scanf("%d",&b);

sum=*n1+*n2;
printf("the sum of two number is %d \n",sum);



    return 0;
}

