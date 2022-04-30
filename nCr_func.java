import java.util.Scanner;
public class nCr_func {

    public static int nCr_calc(int n)
    {
        int ans = 1; 
        for(int i = 1; i <= n; i++)
        {
            ans *= i; 
        }
        return ans;
    }
    public static int call_calc_nCr(int n, int r)
    {
        int num = nCr_calc(n); 
        int den1 = nCr_calc(r); 
        int den2 = nCr_calc(n-r); 

        int answer = num/(den1 * den2); 
        return answer; 
    }
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in); 
       int n = sc.nextInt(); 
       int r = sc.nextInt(); 

        int output = call_calc_nCr(n,r); 
        System.out.println(output);
   }
}
