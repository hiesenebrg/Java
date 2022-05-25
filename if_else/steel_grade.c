#include <stdio.h>

int main()
{
    float hardness, carbon, tensile;
    printf("Enter hardness of steel\n");
    scanf("%f", &hardness);
    printf("Enter carbon content of steel\n");
    scanf("%f", &carbon);
    printf("Enter tensile strength of steel\n");
    scanf("%f", &tensile);

    if (hardness >= 50 && carbon <= 0.7 && tensile <= 5600)
    {
        printf("\nGrade 10");
    }
    else if (hardness > 50 && carbon < 0.7)
    {
        printf("\nGrade 9");
    }
    else if (carbon < 0.7 && tensile < 5600)
    {
        printf("\nGrade 8");
    }
    else if (hardness > 50 && tensile < 5600)
    {
        printf("\nGrade 7");
    }
    else if (hardness > 50 || carbon < 0.7 || tensile < 5600)
    {
        printf("\nGrade 6");
    }
    else
    {
        printf("\nGrade 5");
    }
    return 0;
}