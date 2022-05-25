//PROGRAM FO GUESSING GAME

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int randomno, guessno, nguess=1;
    // for generating random no. between 1 to 100
    srand(time(0));
    randomno = rand()%100+1; //use to generate random no. between 1 to 100
    // printf("Random number is %d\n",randomno);
    
    // loop will run until no. is correctly guessed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guessno);

        if (randomno<guessno)
        {
            printf("Lower number please!\n"); 
            
        }
        else if (randomno>guessno)
        {
            printf("Higher number please!\n");
            
        }
        else if (randomno==guessno)
        {
            printf("Congrats!! Your guess is correct\n");
            printf("You guessed it in %d attempts\n",nguess);
            
        }
        
        nguess++;
    } while (randomno!=guessno);
    
    return 0;
}