#include <stdio.h>
#include <stdlib.h>
int searchf(int *arr, int size, int search)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int *arr;
    int size, search;
    printf("Enter no. of element you want to store: \n");
    scanf("%d", &size);
    //allocating memory to array using calloc

    arr = (int *)calloc(size, sizeof(int));
    printf("Enter the element in array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n\n********************************************\n\n");
    printf("Enter the element you want to search:  ");
    scanf("%d", &search);
    // calling searchf function and storing its return value in result
    int result = searchf(arr, size, search);
    free(arr);
    if (result == -1)
    {
        printf("\n*****Searched Element not found in array*****\n");
    }
    else
    {
        printf("\nSearched Element %d is found at %d index in the array \n", search, result);
    }

    printf("\n*********SEARCHING COMPLETED*************\n");

    return 0;
}