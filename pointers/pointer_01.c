#include <stdio.h>

int main()
{
    int i = 43;
    int *p = &i;
    printf("address of i is %p\n", p);
    p++;
    printf("addresss of i is %p\n", p);
    p++;
    printf("addresss of i is %p\n", p);
    p++;
    printf("addresss of i is %p\n", p);

    return 0;
}