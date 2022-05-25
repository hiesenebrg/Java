#include <stdio.h>
void fun()
{
    register int a = 2;
    printf("%d\n", a);
    a++;
}
int main()
{
    fun();
    fun();
    return 0;
}