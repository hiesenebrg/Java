#include <stdio.h>

int main()
{
    int i, n, divcount = 0;
    printf("Enter a no. to find it is prime or not\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divcount++;
        }
    }

    if (divcount == 2)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}