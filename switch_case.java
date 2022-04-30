import java.util.Scanner;
public class switch_case {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter number : ");
        int n = s.nextInt();
        int C ;
        System.out.println("Enter case :");
        C = s.nextInt();
        switch (C) 
        {
            case 1:
                int sum = 0;
                for (int i = 1; i <= n; i++) {
                    sum = sum+i;
                }
                System.out.print(sum);
                break;
        case 2:
        {
            int mul = 1; 
            for (int i = 1; i <= n; i++) {
                mul *= i;
            }
            System.out.print(mul);
            break;
        }
            default:
            System.out.println("-1");
                break;
        }
    }
}
