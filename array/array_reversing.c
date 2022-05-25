#include<stdio.h>
void rev(int arr[], int n);
int main()
{
    int n;
    printf("Enter no. of element \n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element of array[%d]",i);
        scanf("%d",&arr[i]);
        
        
    }
    rev(arr, n);

    return 0;
}
void rev(int arr[], int n){
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[n - (i+1)];
        printf("reversing array is %d\n",arr2[i]);
        
    }
}