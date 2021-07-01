#include <stdio.h>
int main()
{
   int  m=2;
   int n=2;

    int marks [2][2];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("enter the marks of student %d in subjects %d \n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("the marks of student %d in subject %d is %d\n", i, j, marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
