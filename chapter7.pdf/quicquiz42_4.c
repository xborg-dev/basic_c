#include <stdio.h>
int main(){

int *p1;
int *p2;
p1=(int *)300;
p2=(int *)200;

if (p1>p2){
    printf("p1 is greater");
}
else{
    printf("p2 is greater");
}
    return 0;
}