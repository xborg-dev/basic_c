#include <stdio.h>
int main()
{

    char *ptr = "lipun";
    //char ptr[]="papun";   ------>can't initialize

    ptr = "papun";

    printf("%s", ptr); //------>> reinialize

    return 0;
}