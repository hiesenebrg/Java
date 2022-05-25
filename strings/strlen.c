#include <stdio.h>
int stringlen(char *str);
int main()
{
    char *p = "hello";
    int a = stringlen(p);
    printf("The length of string is %d\n", a);

    return 0;
}
int stringlen(char *str)
{
    int l = 0;

    while (*str != '\0')
    {
        l++;
        str++;
    }
    return l;
}