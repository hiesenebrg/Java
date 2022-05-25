#include <stdio.h>

int main()
{
    int i, j;

    for (i = 2; i <= 7; i++)
    {
        for (j = i; j <= 7; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}