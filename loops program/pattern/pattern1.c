#include<stdio.h>

int main(){
    int i,n;
    printf("*******pattern*******");
    
    for (n=1; n < 5; n++)
    {
       printf("*");
       printf("\n");
       
       for ( i = 1; i < n; i++)
       {
           printf("$");
           
       }
       
    }
    
    return 0;
}