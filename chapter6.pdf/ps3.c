#include <stdio.h>
void passvalue(int a);

int main()
{
    int i = 10;
    int *ptr = &i;
    printf("before changing the  value of i is %d \n", i);

    printf("ten times to its current value............. \n");

     i = 10 * 10;

    passvalue(*ptr);

  

    return 0;
}
void passvalue(int a)
{
     
    printf("after changing the value of i is %d \n", a);
  
   
}
