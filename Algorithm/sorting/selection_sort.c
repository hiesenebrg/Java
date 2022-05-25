#include <stdio.h>
#include <stdlib.h>
int *selection_sort(int *arr, int size)
{
    char sort;
    printf("Select the order in which you want to sort the order: \n ");
    printf("For Ascending order enter 'A': \nFor Descending order enter 'D': \n");
    scanf(" %c", &sort);
    if (sort == 'A')
    {
        int min, temp;
        for (int pass = 0; pass < size - 1; pass++)
        {
            min = arr[pass];
            for (int i = pass + 1; i < size; i++)
            {
                if (min > arr[i])
                {
                    temp = min;
                    min = arr[i];
                    arr[i] = temp;
                }
                arr[pass] = min;
            }
        }
        return arr;
    }
    if (sort == 'D')
    {
        int max, temp;
        for (int pass = 0; pass < size - 1; pass++)
        {
            max = arr[pass];
            for (int i = pass + 1; i < size; i++)
            {
                if (max < arr[i])
                {
                    temp = max;
                    max = arr[i];
                    arr[i] = temp;
                }
                arr[pass] = max;
            }
        }
        return arr;
    }
    else
    {
        printf("\n\nPlease Enter Valid order!!!!!!!");
        exit(0);
    }
}

int main()
{
    int *ptr, size;
    printf("Enter no. of element you want to store: ");
    scanf("%d", &size);

    // allocating memory to array using calloc
    ptr = (int *)calloc(size, sizeof(int));
    printf("Enter Element in array: ");

    //getting element in array
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d elemnent:  ", i + 1);
        scanf("%d", &ptr[i]);
    }
    int *arr = selection_sort(ptr, size);
    //printing sorted array
    printf("\n****Sorted array is******\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n************Sorting Completed**************\n\n");
    free(ptr);

    return 0;
}