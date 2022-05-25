#include <stdio.h>

int main()
{
    int i, j, m, n, matrix[100][100], max;
    printf("Enter row and column of matrix\n");
    scanf("%d%d", &m, &n);

    printf("Enter element of matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter %d,%d element\n", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    max = matrix[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
            }
        }
    }

    printf("The maximum value in element in matrix is %d", max);

    return 0;
}