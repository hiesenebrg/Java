import java.util.Scanner;
public class calc_nCr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n ; 
        n = sc.nextInt();
        int r; 
        r = sc.nextInt();
        int numerator = 1; 
        for (int i = 1; i <= n; i++) {
            numerator *=  i;  
        }
        int denominator1 = 1; 
        for (int i = 1; i <= r; i++) {
            denominator1 = denominator1 * i; 
        }
        int denominator2 = 1; 
        for (int i = 1; i <= n - r; i++) {
            denominator2 = denominator2 * i; 
        }
        {
        int answer = numerator/(denominator1 * denominator2); 
        System.out.println(answer);
        }
    }
}
