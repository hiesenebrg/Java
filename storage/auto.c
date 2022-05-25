#include <stdio.h>
void fun()
{
    int a = 4;
    printf("%d\n", a);
    a++;
}
int main()
{
    fun();
    fun();
    return 0;
}