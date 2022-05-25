#include <stdio.h>
char *slice(char *str, int m, int n);

int main()
{
    char name[] = "anurag singh chauhan";
    int n, m;

    printf("Enter range of character you want to slice\n");
    scanf("%d%d", &m, &n);
    char *p;
    p = slice(name, m, n);
    printf("%s", p);

    return 0;
}
char *slice(char *str, int m, int n)
{
    char *new;
    int i = 0;
    while ((m + i) < n)
    {
        new[i] = str[m + i];
        i++;
    }
    new[i] = '\0';
    return new;
}