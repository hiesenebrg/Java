#include <stdio.h>

float fahrenheit(float a);
int main()
{
    float celsius;
    printf("Enter temperature in celsius\n");
    scanf("%f", &celsius);

    float t = fahrenheit(celsius);
    printf("Celsius %f = fahrenheit %f", celsius, t);

    return 0;
}
float fahrenheit(float a)
{
    float b;
    b = (a * 1.8) + 32;
    return b;
}