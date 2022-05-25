#include<stdio.h>

    int fabonacci(int n);

int main(){
    
    int n,i;
    printf("Enter the no. of term you want to print\n");
    scanf("%d",&n);
        printf("The fabonacci series is\n");
    for ( i = 1; i <= n; i++)

    {
        printf("%d, ",fabonacci(i));
        
        
    }
    
    return 0;
}

int fabonacci(int n){
    if (n==1)
    {
        return 0;   
    }
    else if(n==2){
        return 1;
    }
    else{
        return fabonacci(n-1) + fabonacci(n-2);
    }
}