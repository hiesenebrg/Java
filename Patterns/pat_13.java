package Patterns;
import java.util.Scanner;
public class pat_13 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number of rows : ");
        int n = s.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int space = 0; space < n - i; space++) {
                System.out.print(" ");
            }
            for (int j = i; j >= 1; j--) {
                System.out.print(j);
            }
            for (int j = 2; j <= i; j++) {
                System.out.println(j);
            }
            {
                System.out.println();
            }
        }
    }
}
