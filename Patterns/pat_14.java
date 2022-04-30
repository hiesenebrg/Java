package Patterns; 
import java.util.Scanner;
public class pat_14 
{
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number of rows : ");
        int n = s.nextInt();
        int i,j,k,m,q;
        i =0;
        while (i<n){
            j =0;
            while (j<(n+i)){                
                while (j<(n-i-1)){
                    System.out.print(" ");
                    j+=1;
                }
                k =0;
                m=0;
                while (m<=i){
                    System.out.print(i+k+1);
                    m+=1;
                    k+=1;
                }
                q = i+k-1;
                while ((j+m)<(n+i)){
                    System.out.print(q);
                    j+=1;
                    q+=1;
                }
            
        }
        System.out.println();
                    i+=1;
    }
}
}
