import java.util.Scanner;

public class fibo_boolean {
    public static int fib(int n)
    {
        int k  = 1;
        if(n==0||n==1)
        {
            return 1;
        }
        else
        {
            int x = fib(n-1); 
            int y = fib(n-2);
            if(n==x || n ==y)
            {
                k = 0;
                return k;
            }
            else
            {
                return x+y;
            }
        }
    }
    public static void main(String[] args)
    {

        Scanner s = new Scanner(System.in);
        int n;
        n = s.nextInt();
        int ans = fib(n);
        if(ans == 0)
        {
            System.out.print("true");
        }
        else
        {
            System.out.print("False");
        }
    }
}
