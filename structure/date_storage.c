#include <stdio.h>
typedef struct dt
{
    int date, year;
    int month;

} date;
int main()
{
    date d1;
    // printf("Enter date:\n");
    // scanf("%d", &d1.date);
    // printf("Enter month:\n");
    // scanf("%s", d1.month);
    // printf("Enter year:\n");
    // scanf("%d", &d1.year);
    printf("Enter date in formate dd:MM:year\n");
    scanf("%d:%d:%d", &d1.date, &d1.month, &d1.year);

    printf("\n************Your date********\n ");
    printf("%d/%d/%d\n", d1.date, d1.month, d1.year);

    return 0;
}