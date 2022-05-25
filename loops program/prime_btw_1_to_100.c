#include <stdio.h>

int main()
{
    int i, j, d = 0;
    for (i = 2; i <= 100; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                d++;
            }
        }
        if (d == 2)
        {
            printf("%d ", i);
        }
        d = 0;
    }

    return 0;
}