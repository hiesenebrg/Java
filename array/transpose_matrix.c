#include <stdio.h>

int main()
{
    int i, j, rows, column, matrix[100][100], transpose[100][100];
    printf("Enter rows and column of matrix\n");
    scanf("%d%d", &rows, &column);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= column; j++)
        {
            printf(" enter %d,%d element\n", i, j);

            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Given matrix is \n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= column; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= column; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of given matrix is\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= column; j++)
        {

            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}