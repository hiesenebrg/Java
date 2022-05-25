#include <stdio.h>

void swap(int a, int b);
int main()
{
    int a = 2, b = 4;
    printf("value before swaping in main a=%d,b=%d\n", a, b);
    swap(a, b);
    printf("value after swaping in main a=%d,b=%d\n", a, b);

    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("after swaping value in function a=%d,b=%d\n", a, b);
}