#include <stdio.h>

int main()
{
    int i = 3;
    int *j = &i;
    printf("the value of i is %d\n", i);
    printf("the address of is %p\n", &i);
    printf("the value of i i %d\n", *j);
    printf("the address of i is %p\n", j);

    return 0;
}