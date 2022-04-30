import java.util.Scanner;
public class power_of_num {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int temp = 1; 
        for(int i = 1 ; i <= x ; i++)
        {
            temp = temp * n;
        }
        {
            System.out.println(temp);
        }
    }
}
