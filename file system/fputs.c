#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("getdemo.txt", "w");
    fputc('c', ptr);
    printf("Done\n");
    fclose(ptr);
    ptr = fopen("getdemo.txt", "r");
    char c = fgetc(ptr);
    printf("%c", c);

    return 0;
}