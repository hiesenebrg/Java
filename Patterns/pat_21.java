package Patterns;
import java.util.Scanner;
public class pat_21 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the row number : ");
        int n = sc.nextInt();
            for(int i = n; i >= 1; i--)
            {
                for(int j = n; j >= 1; j--)
            {
                if( j == n-i+1)
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(j);
                }
            }
            {
                System.out.println();
            }
            }
    }
}
