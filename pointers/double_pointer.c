#include <stdio.h>

int main()
{
    int a = 4;
    int *p = &a;
    int **q = &p;
    printf("%d\n", **q);
    printf("%d\n", *p);
    printf("address of a %p\n", &a);
    printf("address of a %p\n", p);

    return 0;
}