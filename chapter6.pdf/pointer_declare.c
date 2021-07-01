// Program to demonstrate Pointers:
#include <stdio.h>
int main (){
 int i=10;
  
 int *j;  // j is a pointer = value of j = address of i
 j=&i;

  int **k; // k is pointer to pointer= value of k =address of j
  k=&j;

  printf("address of i is %u \n",&i);
printf("address of i is %u \n",j);
printf("value of i is %d \n",i);
printf("value of i is %d \n",*(&i));
printf("value of i is %d \n",*j);
printf("value of i is %d \n",**k);

printf("address of j is %u \n",&j);
printf("value of j is %d \n",&i);
printf("adress of j is %u \n",k);
printf("value of j is %u \n",*(&j));
printf("value of j is %u \n",*k);


printf("value of k is %d \n",&j);
printf("value of k is %d \n",k);
printf("address of k is %d \n",&k);

    return 0;
}