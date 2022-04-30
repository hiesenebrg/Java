import java.util.Scanner;
public class nisha {
    public static void main(String[] args) {
        int num1 , num2 , result ; 
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number : ");
        num1 = sc.nextInt();
        System.out.println("Enter Second number : ");
        num2 = sc.nextInt();

        result = (num1 + num2);
        System.out.println("The result is " + result);
    }
}
