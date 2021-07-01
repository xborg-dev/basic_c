

#include <stdio.h>
void passvalue(int a);

int main()
{
    int i = 10;

    printf("before changing the  value of i is %d \n", i);

    printf("ten times to its current value............. \n");

    

    passvalue(i);

  printf("after changing the value of i is %d \n", i);
  

    return 0;
}
void passvalue(int a)
{
      a = 10 *10;

  
   
}


