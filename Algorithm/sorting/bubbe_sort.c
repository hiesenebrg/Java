#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *bubble_sort(int *arr, int size)
{
    char sort;
    printf("Enter the order in which you want to sort:\n");
    printf("For Ascending order enter 'A': \nFor Descending order enter 'D': \n");
    scanf(" %c", &sort);
    if (sort == 'A')
    {
        int temp;
        bool swap;
        for (int pass = 0; pass < size; pass++)
        {
            swap = false;
            for (int i = 0; i < size - pass - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    swap = true;
                }
            }
            if (swap == false)
            {
                printf("\n\n****Array is Already sorted!!!!\n");

                break;
            }
        }
        return arr;
    }
    if (sort == 'D')
    {
        int temp;
        bool swap;
        for (int pass = 0; pass < size; pass++)
        {
            swap = false;
            for (int i = 0; i < size - pass - 1; i++)
            {
                if (arr[i] < arr[i + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    swap = true;
                }
            }
            if (swap == false)
            {
                printf("\n\n****Array is Already sorted!!!!\n");
                break;
            }
        }
        return arr;
    }
    else
    {
        printf("\nPlease Enter valid order!!!!!!!\n");
        exit(0);
    }
}
int main()
{
    int size, *ptr = NULL;
    printf("\nEnter no. of element you want to store:  ");
    scanf("%d", &size);

    //alloacating memory to array using calloc
    ptr = (int *)calloc(size, sizeof(int));
    printf("\nEnter the element in array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d element:  ", i + 1);
        scanf("%d", &ptr[i]);
    }
    int *arr = bubble_sort(ptr, size);
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