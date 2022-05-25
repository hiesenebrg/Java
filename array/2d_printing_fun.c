#include <stdio.h>
#include <stdlib.h>
void printarray(int arr[], int n);
int main()
{
    int n, *ptr;
    printf("Enter the no. of elements\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    printarray(ptr, n);
    free(ptr);
    return 0;
}
void printarray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements of array[%d]\n", i);
        scanf("%d", &arr[i]);

    }
    for ( i = 0; i < n; i++)
    {
        
        printf("Element of array[%d] is %d\n", i, arr[i]);
    }
    
}