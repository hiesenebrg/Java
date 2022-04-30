import java.lang.reflect.WildcardType;
import java.util.Scanner;
public class reverse_of_num {
    public static void main(String[] args) {
        int n , reverse = 0 , reminder ;
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        
        while (n != 0) {
            reminder = n%10;
            reverse = reverse * 10 + reminder;
            n /= 10;
        }
        {
            System.out.println(reverse);
        }
    }
}
