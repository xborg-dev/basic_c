#include <stdio.h>
void printarray(int ptr[], int n) // or (int *ptr,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of elememt %d is %d \n", i, ptr[i]); // *ptr+i
    }
//ptr[2]=555; // this value will change in arr array of main as well because ptr is pointer

}


int main()
{

    int arr[] = {7, 6, 5, 4, 3, 2, 1};
    printarray (arr, 7);
//printf("%d", arr[2]);
    return 0;
}