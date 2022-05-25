#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char you, char comp)
{
    // returning 1 = you win
    // returning -1 = you lose
    // returning 0 = tie

    //for tie condition
    if (you == comp)
    {
        return 0;
    }

    //for no drowing conditon

    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int randnum;
    char you, comp;
    srand(time(0));
    randnum = rand() % 100 + 1;
    if (randnum <= 33)
    {
        comp = 'r';
    }
    else if (randnum > 33 && randnum <= 66)
    {
        comp = 'p';
    }
    else if (randnum > 66)
    {
        comp = 's';
    }
    printf("Enter 'r' for rock , 'p' for paper and 's' scissors\n ");
    scanf(" %c", &you);
    int result = game(you, comp);
    if (result == 0)
    {
        printf("you choose '%c' and computer choose '%c'\n", you, comp);
        printf("***********TIE**************");
    }
    else if (result == 1)
    {
        printf("you choose '%c' and computer choose '%c'\n", you, comp);
        printf("***********YOU WIN!!**************");
    }
    else if (result == -1)
    {
        printf("you choose '%c' and computer choose '%c'\n", you, comp);
        printf("***********YOU LOOSE!!**************\n");
    }

    printf("***********Game completed***********\n");

    return 0;
}