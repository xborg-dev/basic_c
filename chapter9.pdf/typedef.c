#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[30];

}emp;
void show(struct employee emp)
{
    printf("%d\n", emp.code);
    printf("%f\n", emp.salary);
    printf("%s\n", emp.name);
}

int main (){
//declaring e1 and ptr
emp e1;
struct employee *ptr;

//pointing pointer to e1
ptr=&e1;

//set the number value for e1
ptr->code=101;
ptr->salary=10.1;
strcpy (ptr->name,"lipun");
show (e1);




    return 0;
}