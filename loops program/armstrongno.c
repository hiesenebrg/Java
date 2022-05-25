#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, d = 0, r, final = 0;
    printf("Enter a no.\n");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        num /= 10;
        d++;
    }

    num = original;

    while (num != 0)
    {
        r = num % 10;
        final += pow(r, d);
        num /= 10;
    }

    if (original == final)
    {

        printf("%d is armstrong no.", original);
    }
    else
    {
        printf("%d is not a armstrong no.", original);
    }

    return 0;
}