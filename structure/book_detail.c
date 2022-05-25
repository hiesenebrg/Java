#include <stdio.h>

struct bookdetail
{
    int id;
    char title[20];
    float price;
};
struct bookdetail st;
int main()
{
    printf("Enter book id\n");
    scanf("%d", &st.id);
    printf("Enter book title\n");
    scanf(" %[^\n]s", st.title);
    printf("Enter book price\n");
    scanf("%f", &st.price);

    printf("book id = %d\n", st.id);
    printf("book title = %s\n", st.title);
    printf("book title = %f\n", st.price);

    return 0;
}