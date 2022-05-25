#include <stdio.h>

int value(int *);

int main()
{
    int a;
    printf("Enter a no.\n");
    scanf("%d", &a);
    value(&a);
    printf("the 10 times of a is %d\n", a);

    return 0;
}
int value(int *a)
{
    *a = (*a) * 10;
    return *a;
}