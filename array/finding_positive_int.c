#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, -4, -5, 3, -5};
    int p = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > 0)
        {
            p++;
        }
    }
    printf("No. of positive intergers in array is %d\n", p);

    return 0;
}