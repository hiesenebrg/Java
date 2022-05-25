#include<stdio.h>

int main(){
    int n,i=1,sum=0;
    printf("********sum of n natural no.*********\n");
    
    printf("Enter no. of natural no. of want to add\n");
    scanf("%d",&n);
    // using while loop
    // while (i<=n)
    // {
    //     sum+=i;
    //     i++;

    // }
    // using do-while loop
    do
    {
        sum+=i;
        i++;
    } while (i<=n);
    
    printf("sum of %d natural no. is %d",n,sum);
    
    
    return 0;
}