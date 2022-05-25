#include <stdio.h>

int main()
{
    int i, j = 0, space, row;
    printf("Enter no. of rows you want to print\n");
    scanf("%d", &row);

    for (i = 1; i <= row; i++, j = 0)
    {
        for (space = 1; space <= row - i; space++)
        {
            printf("  ");
        }
        while (j != 2 * i - 1)
        {
            printf("* ");
            j++;
        }
        printf("\n");
    }

    return 0;
}
