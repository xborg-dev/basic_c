#include <stdio.h>
int main()
{

    char st1[39] = "hello";
    char *st2 = "hello";
    //"hezlo";
    int val = strcmp(st1, st2);
    printf("now the value is %d", val);

    return 0;
}