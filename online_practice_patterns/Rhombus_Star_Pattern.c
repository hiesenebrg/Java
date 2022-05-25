#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter no. rows you want to print\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i - 1; j--)

        {
            printf(" ");
        }
        for (int k = 1; k <= n; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}