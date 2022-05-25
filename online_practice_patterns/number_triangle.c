#include <stdio.h>

int main()
{
    int n, a = 1;

    printf("Enter no. rows you want to print: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a = 1;
        for (int space = i; space <= n - 1; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            a++;
        }
        a--;
        for (int k = 1; k < i; k++)
        {
            printf("%d", --a);
        }

        printf("\n");
    }

    return 0;
}