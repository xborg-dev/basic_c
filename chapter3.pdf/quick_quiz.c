#include <stdio.h>
int main()
{
    int score;
    printf("enter your score (0-100)\n");
    scanf("%d", &score);

    switch (score)
    {

    case 1:
        printf("grade : A\n");
        break;

    case 4:
        printf("grade : B\n");
        break;
    case 3:
        printf("grade : C\n");
        break;
    case 2:
        printf("grade : D\n");
        break;
    case 6:
        printf("grade : E\n");
        break;

    default:
        ("grade : F\n");
        break;
    }

    return 0;
}