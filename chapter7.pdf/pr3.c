#include <stdio.h>
int main()
{

    int mulof[10];

    for (int i = 0; i < 10; i++)
    {
        
        mulof[i] = 5 * (i + 1);
    }
    for (int i = 0; i < 10; i++){
        printf("5x%d=%d\n",i+1,mulof[i]);

    }

    return 0;
}