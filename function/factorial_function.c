#include<stdio.h>

    int factorial(int n);


int main(){
    
    int n,f;
    printf("Enter a no. to find its factorial\n");
    scanf("%d",&n);
    f=factorial(n);
    printf("factorial of %d is %d ",n,f);
    

    return 0;
}

int factorial(int n){
    if (n==0||n==1)
    {
        return 1;

    }
    else{
        return n*factorial(n-1);
    }
    
}