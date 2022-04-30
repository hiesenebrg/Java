import java.util.Scanner;

public class prime_number
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int d = 2;
        while (d <= n - 1) 
        {
            if (d%n==0) 
            
            {
                System.out.println("Not a prime number..");
                return;
            }
            d = d+1;
        }
        System.out.println("prime Number..");
    }
}
