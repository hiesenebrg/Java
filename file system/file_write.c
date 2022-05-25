#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("demo.txt", "w");
    fprintf(ptr, "Hello, I am Anurg singh chauhan");
    fclose(ptr);

    return 0;
}