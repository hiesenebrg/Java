#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Anurag singh chauhan";

    //strlen function
    int a = strlen(name); //tell the length of string excluding the null (\0)character
    printf("the length of string is %d\n", a);
    char name2[40];

    //strcpy function
    strcpy(name2, name);
    puts(name2);

    //strcat function
    char p[50] = "hello ";
    strcat(p, name);
    puts(p);

    //strcmp function
    char *p2 = "hello";
    char *p1 = "hello";
    int b = strcmp(p2, p1);
    printf("%d\n", b);

    return 0;
}