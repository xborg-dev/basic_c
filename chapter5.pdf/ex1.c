#include <stdio.h>
void display();
int main()
{
    int a;
    printf("initializing  disply function \n");
    display();                      //------>> function call
    printf(" display function finished its work \n");
    return 0;
}

void display()                       //------>> function defination
{
    printf("this is display \n");
}
