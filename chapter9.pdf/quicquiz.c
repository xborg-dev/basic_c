#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};

int main()
{

    struct employee e1, e2, e3;

    printf("enter the value for code e1 ;");
    scanf("%d", &e1.code);
    printf("enter the value for salary e1 ;");
    scanf("%f", &e1.salary);
    printf("enter the value for name e1 ;");
    scanf("%s", &e1.name);

    printf("enter the value for code e2 ;");
    scanf("%d", &e2.code);
    printf("enter the value for salary e2 ;");
    scanf("%f", &e2.salary);
    printf("enter the value for name e2 ;");
    scanf("%s", &e2.name);

    printf("enter the value for code e3 ;");
    scanf("%d", &e3.code);
    printf("enter the value for salary e3 ;");
    scanf("%f", &e3.salary);
    printf("enter the value for name e3 ;");
    scanf("%s", &e3.name);

    return 0;
}