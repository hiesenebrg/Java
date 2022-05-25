#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    printf("Enter the element of matrix a\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter %d,%d element\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the element of matrix b\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter %d,%d element\n", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("THe sum of matrix a and b is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}