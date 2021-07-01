//A program to add two numbers using call by reference
#include<stdio.h>
int addtwodigit(int*n1,int*n2);
int main (){


    int a,b,sum;

printf("enter the value of a\n");
scanf("%d",&a);
printf("enter the value of b\n");
scanf("%d",&b);
sum=addtwodigit(&a,&b);


printf("sum =%d\n",sum);


    return 0;
}
int addtwodigit(int*n1,int*n2){
int sum;

sum=*n1+*n2;
return sum;

}