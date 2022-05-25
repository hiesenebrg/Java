#include <stdio.h>

int main()
{
    FILE *ptr = fopen("demo.txt", "r");
    int a, b;
    fscanf(ptr, "%d", &a);
    fscanf(ptr, "%d", &b);
    printf("%d,%d\n", a, b);
    fclose(ptr);
    return 0;
}