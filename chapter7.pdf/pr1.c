#include <stdio.h>
int main()
{

    int arr[10];
    int *ptr = &arr[0]; //int *ptr=arr
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("the pointer points to third element of memory");
    }

    else
    {

        printf("these donot point the same location in memory");
    }

    return 0;
}