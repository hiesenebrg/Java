#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;

    printf("Enter no. of element you want to print :\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        a = 0;
        b = 1;
        printf("%d ", a);
        printf("%d ", b);

        for (int j = 0; j < i; j++)
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}