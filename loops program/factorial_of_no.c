#include <stdio.h>

int main()
{
    int n, i, fact = 1;
    printf("Enter a no. to find its factorial\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("\nFactorial of %d is %d", n, fact);

    return 0;
}