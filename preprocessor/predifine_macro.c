#include <stdio.h>

int main()
{
    printf("date : %s\n", __DATE__);
    printf("file : %s\n", __FILE__);
    printf("date : %s\n", __TIME__);
    printf("date : %d\n", __LINE__);
    printf("date : %d\n", __STDC__);

    return 0;
}