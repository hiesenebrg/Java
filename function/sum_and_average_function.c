#include <stdio.h>
void sumandavg(int *a, int *b, int *sum, float *avg)
{
    *sum = *a + *b;
    *avg = *sum / 2.0;
}
int main()
{
    int i, j, sum;
    float avg;
    printf("Enter two no.\n");
    scanf("%d%d", &i, &j);

    sumandavg(&i, &j, &sum, &avg);

    printf("the sum and average of %d and %d is\n", i, j);

    printf("sum=%d\n", sum);
    printf("average=%f\n", avg);

    return 0;
}