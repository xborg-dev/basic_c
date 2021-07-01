// a program to accept marks of twelve student of an array and print on screen


#include<stdio.h>
int main(){

int marks[12];
for(int i=0;i<12;i++){

    printf("enter the value of marks for student %d \n", i);
    scanf("%d",&marks[i]);
}
for(int i=0;i<12;i++){

    printf("the value of marks for student %d is %d \n", i,marks[i]);

}




return 0;
}