#include<stdio.h>
int main(){
int age;
printf("enter your age\n");
scanf("%d",&age);

if (age>=80){
    printf("you are above 80 ,you can not drive \n");
}
else {
    printf("you can drive");
    
}

    return 0;
}