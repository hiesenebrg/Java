#include <stdio.h>

int main()
{
    int i = 3;
    int *a, **b;
    a = &i;
    b = &a;
    printf("address of i is %p\n", &i);
    printf("address of i i %p\n", a);
    printf("value of i is %d\n", *a);
    printf("address of a is %p\n", &(*a));
    printf("value of i is %d\n", **b);

    return 0;
}