import java.util.Scanner;
public class fibonacci_recursion {
    
    public static int fib (int  n){
        if(n ==0 )
        {
            return 0; 
        }
        if(n == 1)
        {
            return 1;
        }
        {
        return fib(n-1) + fib(n-2);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number that you want fibonacci number : ");
        int n = sc.nextInt(); 
        System.out.print(fib(n) + " ");

    }
}
