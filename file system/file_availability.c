#include <stdio.h>

int main()
{
    FILE *ptr = fopen("demo.txt", "r");

    if (ptr == NULL)
    {
        printf("File not available");
    }
    else
    {
        printf("File available");
    }
    fclose(ptr);
    return 0;
}