#include <stdio.h>
void binary(int n)
{
    int bin[20], i = 0, q;
    while (n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary code for given no. is : \n");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }
}
int main()
{
    int n;
    printf("Enter decimal number to find its Binary: \n");
    scanf("%d", &n);
    binary(n);

    return 0;
}