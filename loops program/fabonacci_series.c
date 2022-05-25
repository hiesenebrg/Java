#include <stdio.h>

int main()
{
    int i, a = 0, b = 1, c;
    printf("%d , %d , ", a, b);
    for (i = 1; i <= 3; i++)
    {
        c = a + b;
        a = b;
        b = c;

        printf("%d , ", c);
    }

    return 0;
}