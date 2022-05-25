#include <stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Enter the no. of natural no. You want to sum\n");
    scanf("%d", &n);
    printf("The sum of n natural is %d\n", sum(n));

    return 0;
}

int sum(int n)
{

    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}