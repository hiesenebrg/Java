#include <stdio.h>
void strcopy(char *str, char *str2);

int main()
{
    char name2[40];
    char name[30];
    printf("Enter your name\n");
    fgets(name, 30, stdin);

    strcopy(name2, name);
    puts(name2);
    return 0;
}
void strcopy(char *str, char *str2)
{
    int i = 0;
    while (str2[i] != '\0')
    {
        str[i] = str2[i];
        i++;
    }
    str[i] = '\0';
}