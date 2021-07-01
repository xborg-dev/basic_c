#include <stdio.h>
float convertcelsiusfah(float cel){

return ((cel * 9 / 5) + 32);}

int main()
{
    float celsius, fahrenheit;
    printf("enter the temperature in celsius \n");
    scanf("%f", &celsius);
    fahrenheit = convertcelsiusfah(celsius);

    printf("%.2f celsius= %.2f farenheit \n", celsius, fahrenheit);

    return 0;
}

