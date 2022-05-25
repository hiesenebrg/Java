#include <stdio.h>

int main()
{
    int array[5];
    int *p = array;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element of array\n");
        scanf("%d", p);
        p++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("array element are \n");
        printf("%d\n", array[i]);
    }

    return 0;
}