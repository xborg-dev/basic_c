#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[];
};

int main()
{

    struct employee facebook[100];

    facebook[0].code = 100;

    facebook[0].salary = 79.77;
    strcpy(facebook[0].name, "harry");

    printf("%f", facebook[0].salary);

    return 0;
}