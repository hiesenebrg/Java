#include <stdio.h>
#include <string.h>
struct employ
{
    int code;
    char name[30];
    float salary;
};

int main()
{
    typedef struct employ em; // make alias for th struct employ in short we can now use "em" in place of "struct employ"

    em e[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the code of employe\n");
        scanf("%d", &e[i].code);
        printf("Enter the name of employe\n");
        scanf(" %[^\n]s", e[i].name);
        printf("Enter the salary of employe\n");
        scanf("%f", &e[i].salary);
    }
    printf("***************************************************\n");

    for (int i = 0; i < 3; i++)
    {
        printf("code = %d\n", e[i].code);
        printf("Name = %s \n", e[i].name);
        printf("salary = %f \n", e[i].salary);
    }
    printf("*****************************************************\n");

    return 0;
}