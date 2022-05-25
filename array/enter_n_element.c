#include <stdio.h>

int main()
{
    int array[100], i, j, n;
    printf("Enter the no. of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Arrray elements are\n");
    for (j = 0; j < n; j++)
    {
        printf("%d\n", array[j]);
    }

    return 0;
}