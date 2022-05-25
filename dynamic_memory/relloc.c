#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter no. of element you want to store: \n");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
    printf("Enter elements in array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : \n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d element is  : %d \n", i + 1, ptr[i]);
    }
    printf("Enter no. of element you want to store 2 nd time: \n");
    scanf("%d", &n);
    ptr = realloc(ptr, n * sizeof(int));
    printf("Enter elements in array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : \n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d element is  : %d \n", i + 1, ptr[i]);
    }
    free(ptr);

    return 0;
}