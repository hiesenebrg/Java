#include <stdio.h>

int prime(int num1);

int main()
{
    int n, k;
    printf("Enter a no.");
    scanf("%d", &n);

    k = prime(n);
    if (k == 2)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}
int prime(int num1)
{
    int i, c = 0;
    for (i = 1; i <= num1; i++)

    {
        if (num1 % i == 0)
        {
            c++;
        }
    }
    return c;
}