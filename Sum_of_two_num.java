import java.util.Scanner;
public class Sum_of_two_num
 {
    public static void main(String[] args) {
        System.out.print("Enter two number for adding : ");
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt(); 
        int j = scan.nextInt();
        int k = i + j;
        System.out.println(k);
    }
}
