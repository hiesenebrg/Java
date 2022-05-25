#include <stdio.h>
void pattern(int n);

int main()
{
    int n;
    printf("Enter the no. of line you want to prints\n");
    scanf("%d", &n);
    pattern(n);

    return 0;
}
void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    // if (n == 1)
    // {
    //     printf("*\n");
    //     return;
    // }

    // pattern(n - 1);
    // for (int i = 0; i < 2 * n - 1; i++)
    // {
    //     printf("* ");
    // }
    // printf("\n");
}