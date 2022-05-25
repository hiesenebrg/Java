#include <stdio.h>

int sum(int a, int b); //funtion declaration

int main()
{
    int c, num1, num2;

    printf("Enter the value of a and b \n");
    scanf("%d%d", &num1, &num2);

    c = sum(num1, num2);
    printf("%d", c);

    return 0;
}

int sum(int a, int b)
{
    int result;

    // result = a + b;
    // return result;
    return a + b;
}