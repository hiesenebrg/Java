#include <stdio.h>
typedef struct vector
{
    int x, y;
} vec;
vec sumvec(vec v1, vec v2)
{
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
    vec v1, v2, sum;
    v1.x = 2;
    v1.y = 5;
    v2.x = 6;
    v2.y = 1;
    sum = sumvec(v1, v2);
    printf("the sum of vector is %d , %d\n", sum.x, sum.y);

    return 0;
}