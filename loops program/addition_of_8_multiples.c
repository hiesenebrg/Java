#include<stdio.h>

int main(){
    int i,sum=0,n;
    printf("Enter a no. whose multiples will be added\n");
    scanf("%d",&n);
    // to print sum of multiples of any number upto 10
    for ( i = 1; i < 11; i++)
    {
       sum = sum + n*i; 
    }
    printf("\nsum of multiples of %d is %d",n,sum);
    
    return 0;
}