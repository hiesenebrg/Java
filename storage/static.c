#include <stdio.h>
void sum()
{
    static int a = 2;
    printf("%d\n", a);
    a++;
}

int main()
{

    for (int i = 0; i < 3; i++)
    {
        sum();
    }

    return 0;
}
