#include <stdio.h>
int main()
{

    int i = 0, skip = 5;

    while (i < 10)
    {
        i++;
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

//used to immediately move to the nexr itration of the loop