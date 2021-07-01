//find maximum numbers using two numbers in pointer 

#include<stdio.h>
int main(){

int n1,n2;
int *a;
int *b;
a=&n1;
b=&n2;





printf("enter the value of n1\n");
scanf("%d",&n1);

printf("enter the value of n2\n");
scanf("%d",&n2);

if(*a>*b){
    printf("%d is maximum \n",*a);

}
else{
    printf("%d is maximum \n",*b);
}


    return 0;
}




