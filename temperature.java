import java.util.Scanner;
public class temperature {
    public static void main(String[] args) {
        int f;  
        System.out.println("Enter farenhite degree : ");
        Scanner sc = new Scanner(System.in);
        f = sc.nextInt();
        int cel = (int)((5.0/9)*(f-32));
        System.out.println(cel);
    }
}
