#include <stdio.h>
void table(int level, int n, int arr[][10])
{
    printf("Multiplication table of %d is \n", n);

    for (int i = 0; i < 10; i++)
    {
        arr[level][i] = n * (i + 1);
    }
    for (int j = 1; j <= 10; j++)
    {

        printf("%d  x  %d  =  %d\n", n, j, n * j);
    }

    printf("******************************************************\n");
}
int main()
{
    int multi[3][10];
    int n;
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the no. whose table you want to print\n");
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        table(i, n, multi);
    }

    return 0;
}