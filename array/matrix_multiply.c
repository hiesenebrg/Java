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

    //printing of matrix a
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
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

    //printing of matrix b
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    //for c matrix null
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
        }
    }
    //multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    //printing of matrix c
    printf("The multiply of a and b\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}