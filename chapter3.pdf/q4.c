
#include <stdio.h>
int main(){

 int year= 2021;

 
 if ( (year%4==0) &&(( year%400==0)  || (year%100!=0)) ){
printf("this is a leap year \n");
}


else{
 printf("this is not a leap year");
}


    return 0;
}
