import java.util.Scanner;
public class prime_up_to_n {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int d = 0;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                if (i%j==0) {
                    d++;
                }
            }
            if(d==2)
            {
                System.out.println(i);
            }
            d = 0;
        }
    }
}
