#include <stdio.h>

int main()
{
    int i, j;
    char aplhabet = 'A';
    for (i = 1; i <= 5; i++, aplhabet = 'A')
    {
        for (j = i; j <= 5; j++)
        {
            printf("%c ", aplhabet);
            aplhabet++;
        }
        printf("\n");
    }

    return 0;
}