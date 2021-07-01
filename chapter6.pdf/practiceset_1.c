#include<stdio.h>
int main(){

int i=10;
int *ptr=&i;

printf("value of i is %d \n",i);

printf("adress of i is %d \n",&i);

printf("value of i is %d \n",*ptr); //--------->> *(&i)





    return 0;
}