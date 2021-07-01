#include<stdio.h>
int main (){

int i=3;
int *ptr=&i;
int **c=&ptr;






printf("the value of i is %d\n", **c);


    return 0;
}