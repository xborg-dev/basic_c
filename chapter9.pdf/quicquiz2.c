
#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[40];
};

void show(struct employee emp)
{
    printf("%d\n", emp.code);
    printf("%f\n", emp.salary);
    printf("%s\n", emp.name);
}

int main()
{

    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 32.3;
    strcpy(ptr->name, "lipun");
    show(e1);


    return 0;
}
