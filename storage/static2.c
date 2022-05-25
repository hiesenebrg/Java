#include <stdio.h>
void fun()
{
    for (int i = 0; i < 3; i++)
    {
        static int a = 1;
        int p = 6;
        a++;
        p++;
        printf("At %d loop static a=%d\n", i, a);
        printf("At %d loop auto p=%d\n", i, p);
    }
}
int main()
{
    fun();
    return 0;
}