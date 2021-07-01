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

    struct employee harry = {100, 34.4, "lipun"};
    printf("%d\n", harry.code);
    printf("%s\n", harry.name);
    printf("%f\n", harry.salary);

    return 0;
}