import java.util.Scanner;

public class prime_func {

    public static int isPrime(int n )
    {
        int ans = 1; 
        int d = 2; 
       while(d <= n-1)
       {
            if(n%d==0)
            {
            d++; 
            }
        }
         return ans;
         
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int n = sc.nextInt(); 
        
        int output = isPrime(n); 
        System.out.println(output);
    }
}
