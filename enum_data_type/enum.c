#include <stdio.h>
enum week
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday

};
int main()
{
    enum week day;
    day = sunday;
    printf("sunday= %d", day);

    return 0;
}