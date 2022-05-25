#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    int a, b, c;
    float avg;
    printf("Enter three number to find its average\n");
    scanf("%d%d%d", &a, &b, &c);

    avg = average(a, b, c);

    printf("The average of given no, is %f\n", avg);

    return 0;
}
float average(int a, int b, int c)
{
    return ((a + b + c) / 3.0);
}