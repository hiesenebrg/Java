#include <stdio.h>

void morning();
void evening();
void night();

int main()
{

    morning();
    evening();
    night();
    return 0;
}

void morning()
{
    printf("Good Morning\n");
}
void evening()
{
    printf("Good evening\n");
}
void night()
{
    printf("Good night\n");
}