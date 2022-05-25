#include <stdio.h>
struct demo
{
    char a;
    int c;
    char b;
};

int main()
{
    struct demo c1;
    printf("%d\n", sizeof(c1));

    return 0;
}