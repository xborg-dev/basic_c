#include <stdio.h>
float average(int n1, int n2, int n3);

int main()
{
    average (1,3,3);
    printf("The average of a, b, c is %d \n", average);

    return 0;
}
float average(int n1, int n2, int n3)
{
    float result;
    result = (n1 + n2 + n3) / 3;
    return result;
}
