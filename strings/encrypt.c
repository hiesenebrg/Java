#include <stdio.h>
void encry(char *str)
{

    while (*str != 0)
    {
        *str = (*str) + 1;
        str++;
    }
}
void decry(char *str)
{
    while (*str != 0)
    {
        *str = *str - 1;
        str++;
    }
}
int main()
{
    char mess[50];
    printf("Enter your message\n");
    fgets(mess, 50, stdin);
    encry(mess);
    printf("your encrypted mess is\n");
    printf("%s", mess);

    decry(mess);
    printf("decrypted mess is \n");
    puts(mess);

    return 0;
}