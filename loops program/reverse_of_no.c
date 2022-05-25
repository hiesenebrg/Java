#include <stdio.h>

int main()
{
    int n, n1, reversed = 0, r;
    printf("Enter a no.\n");
    scanf("%d", &n);

    n1 = n;
    while (n != 0)

    {
        r = n % 10;
        reversed = reversed * 10 + r;
        n /= 10;
    }
    printf("The reverse of %d is %d", n1, reversed);

    return 0;
}