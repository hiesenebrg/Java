#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter side a , b and c of triangle\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Equilateral triangle");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Isosceles Triangle");
    }
    else if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
    {
        printf("Right Angled triangle");
    }

    else
    {
        printf("Scalene Triangle");
    }

    return 0;
}