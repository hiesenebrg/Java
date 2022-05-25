#include <stdio.h>

int main()
{
    int a, b, *p, *q, sum;
    p = &a;
    q = &b;
    printf("Enter two value\n");
    scanf("%d%d", p, q);

    sum = *p + *q;
    printf("%d", sum);

    return 0;
}