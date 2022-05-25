#include <stdio.h>

int main()
{
    int array[] = {4, 5, 3, 4, 4};
    // int(*p)[5];
    // p = &array;
    // for (int i = 0; i < 5; i++)
    // {

    //     printf("element 1 of array is %d\n", *(*p + i));
    // }
    int *p;
    p = array;
    for (int i = 0; i < 5; i++)
    {
        printf("Element of array is %d\n", *(p + i));
    }

    return 0;
}