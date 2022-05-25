#include <stdio.h>

int main()
{
    int n, i, d, sum = 0, n1;
    printf("Enter a no. to find its digit sum\n");
    scanf("%d", &n);
    n1 = n;
    while (n != 0)
    {
        d = n % 10;
        sum += d;
        n /= 10;
    }
    printf("The sum of digits of %d is %d", n1, sum);

    return 0;
}