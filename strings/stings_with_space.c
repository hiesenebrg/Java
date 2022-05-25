#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("Enter your name\n");
    // scanf("%[^\n]s", name);              does not check bound checking of input
    // gets(name);               it also does not perform bound checking and get input until new line encounter
    fgets(name, sizeof(name), stdin);
    // printf("%s\n", name);
    puts(name);

    return 0;
}