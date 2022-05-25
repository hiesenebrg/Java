#include <stdio.h>
struct book
{
    int price;
    char name[30];
};

int main()
{
    struct book b1;
    struct book *ptr;
    ptr = &b1;
    ptr->price = 30; //ptr pointing to pirce in b1 structure
    printf("%d", b1.price);

    return 0;
}