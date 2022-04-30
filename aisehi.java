 import java.util.Scanner;
public class aisehi {
	
	public static void main(String[] args) {
		// Write your code here
Scanner sc = new Scanner(System.in);
        int n  = sc.nextInt();
        char a = sc.next().charAt(0);
        double hra =  ((20*n)/100);
    	double da =((50*n)/100);
        double pf = ((11*n)/100);
    
        
        if (a=='A'){
            int allow = 1500;
            System.out.print(hra + da -pf + n +allow );
        }else
            if (a=='B'){
            int allow = 1300;
            System.out.print(hra + da -pf + n +allow );
        }
        
	}
}

