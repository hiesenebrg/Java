#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;
    printf("Enter the no. of term you want to sum\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += (i / (i + 1.0));
    }

    printf("The sum of %d th term of series is %f", n, sum);

    return 0;
}