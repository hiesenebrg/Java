#include <stdio.h>

int main()
{
    FILE *ptr = fopen("employ.txt", "w");
    char name[40];
    int salary;
    printf("Enter detail of employ: \n");
    for (int i = 0; i < 2; i++)
    {
        printf("Enter name: \n");

        scanf(" %[^\n]s", name);
        printf("Enter salary: \n");
        scanf("%d", &salary);
        fprintf(ptr, "%s = %d\n", name, salary);
    }
    printf("Successfully printed data in file employ.txt\n");

    fclose(ptr);
    return 0;
}