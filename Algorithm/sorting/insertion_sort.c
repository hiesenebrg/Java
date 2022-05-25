#include <stdio.h>
#include <stdlib.h>
int *insertion_sort(int *arr, int size)
{
    char sort;
    printf("Select the order in which you want to sort the order: \n ");
    printf("For Ascending order enter 'A': \nFor Descending order enter 'D': \n");
    scanf(" %c", &sort);
    if (sort == 'A')
    {
        int key, i, pass;
        for (pass = 1; pass < size; pass++)
        {
            key = arr[pass];
            i = pass - 1;
            while (i >= 0 && key < arr[i])
            {
                arr[i + 1] = arr[i];
                i--;
            }
            arr[i + 1] = key;
        }

        return arr;
    }
    if (sort == 'D')
    {
        int key, i, pass;
        for (pass = 1; pass < size; pass++)
        {
            key = arr[pass];

            for (i = pass - 1; i >= 0 && key > arr[i]; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[i + 1] = key;
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
    int size, *ptr;
    printf("\nEnter no. of element you want to store:  ");
    scanf("%d", &size);

    //allocating memory to array using calloc
    ptr = (int *)calloc(size, sizeof(int));
    printf("\nEnter the elements in array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d element: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    int *arr = insertion_sort(ptr, size);
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