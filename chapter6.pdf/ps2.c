#include <stdio.h>
void printadd(int a);
/*void printAdd(int a){
    printf("The address of variable a is %u\n", &a);*/
int main()
{
    int i = 5;
    printf("the value of i is %d \n", i);
printadd(i);

    printf("the address of i is %u\n", &i);
     
    return 0;
}

void printadd(int a){

    printf("the address of variable a is %u\n",&a);

}




