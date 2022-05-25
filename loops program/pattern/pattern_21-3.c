#include <stdio.h>

int main()
{
    int i, j;
    char ch = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%c ", 'A' - 1 + i);
            ch++;
        }
        printf("\n");
    }

    return 0;
}