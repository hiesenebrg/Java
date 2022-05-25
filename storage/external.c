#include <stdio.h>
extern int a = 4;
void fun()
{
    printf("%d\n", a);
}

int main()
{
    int a = 6;
    printf("%d\n", a); //output will be zero
    fun();

    return 0;
}