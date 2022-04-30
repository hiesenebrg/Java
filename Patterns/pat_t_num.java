package Patterns;
import java.util.Scanner;
public class pat_t_num {
    public static void main(String[] args) {
        int n ; 
        int k ;
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        for(int i = 0 ; i <= n; i++)
        {
            k = i;
            for(int j = 0; j < i; j++)
            {
                System.out.print(k);
                k -= 1;
            }
            {
                System.out.println();
            }
        }

    }
}
