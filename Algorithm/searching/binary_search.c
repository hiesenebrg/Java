#include <stdio.h>
#include <stdlib.h>
int binary_search(int *arr, int s, int l, int search)
{
    int mid = s + (l - s) / 2;
    if (l >= s)
    {

        if (arr[mid] == search)
        {
            return mid;
        }
        else if (arr[mid] > search)
        {
            return binary_search(arr, s, mid - 1, search);
        }
        else
        {
            return binary_search(arr, mid + 1, l, search);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size, *arr, search;
    printf("\nEnter NO. of element you want to store: ");
    scanf("%d", &size);
    //allocating memory to array using calloc
    arr = (int *)calloc(size, sizeof(int));
    printf("\nEnter no. of element in array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n\n*************************************************");

    printf("\nEnter element you want to search:  ");
    scanf("%d", &search);
    //calling function for binary search
    int result = binary_search(arr, 0, size - 1, search);
    free(arr);
    if (result == -1)
    {
        printf("\n\n**********Searched Element not found in array********\n");
    }
    else
    {
        printf("\n\n Search element %d is found at %d index\n", search, result);
    }

    return 0;
}