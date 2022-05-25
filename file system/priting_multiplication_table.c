#include <stdio.h>

int main()
{
    FILE *ptr;
    int n;
    ptr = fopen("table.txt", "w");
    printf("Enter no. whose table you want to print\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", n, i, n * i);
    }
    printf("Table successfully generated\n");

    fclose(ptr);
    return 0;
}