#include <stdio.h>

int main()
{
    char name[20] = "anurag singh";
    // name[20] = "anurag";
    char *p = name;
    p = "anurg singh chauhan";
    puts(p);

    // puts(name);
    return 0;
}