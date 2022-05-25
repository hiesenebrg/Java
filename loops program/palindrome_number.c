#include<stdio.h>

int main(){
    int n,original,r,final=0;
    printf("Enter a no.");
    scanf("%d",&n);

    original=n;
    while (n!=0)
    {
        r=n%10;
        final=final*10+r;
        n/=10;
    }
    
    if (original==final)
    {
        printf("%d is palindrome no.",original);
        
    }
    else{
        printf("%d is not palindrome no.",original);
        
    }
    
    
    return 0;
}