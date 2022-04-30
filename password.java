import java.util.Scanner;
public class password {
    public static void main(String[] args) {
        // Puting value that cannot be change ..
        final int NUM_UPPER_CASE = 2;
        final int NUM_LOWER_CASE = 3;
        final int NUM_DIGITS = 2;
        final int NUM_SPECIAL_CASE = 1;

        // Value which will check for password..
        int upperCount = 0; 
        int lowerCount = 0; 
        int specialCount = 0; 
        int digit = 0; 

        Scanner sc = new Scanner(System.in); 
        System.out.println("......Your password should must have meet these requirment......");
        System.out.println("Your password should must have two Capital letter.");
        System.out.println("Your password should must have three small letter.");
        System.out.println("Your password should must have two number digit.");
        System.out.println("Your password should must have any special character @ , $ , % , # , etc.");
        System.out.println();
        System.out.print("Please enter your password here :- ");
        String input = sc.nextLine();
        int inputLen = input.length();

        //Character
        //Checks every cases in password
        for(int i = 0; i < inputLen; i++)
        {
            char ch = input.charAt(i);
            if(Character.isUpperCase(ch))
            {
                upperCount++;
            }
            else if (Character.isLowerCase(ch))
            {
                lowerCount++;
            }
            else if (Character.isDigit(ch))
            {
                digit++;
            }
            else
            {
                specialCount++;
            }
        }
        if(upperCount >= NUM_UPPER_CASE && lowerCount >= NUM_LOWER_CASE && digit >= NUM_DIGITS && specialCount >= NUM_SPECIAL_CASE)
        {
            System.out.println(".....Your password is strong and highly encrypted.....");
        }
        else
        {
            System.out.println("......Your password dosen't meet minimum requirment......");

            //Checking whats not in the password
            if(upperCount < NUM_UPPER_CASE)
            {
                System.out.println("Your password does't contain two Capital letter!!!!");
            }
            if(lowerCount < NUM_LOWER_CASE)
            {
                System.out.println("Your password does't contain three Lower case!!!!");
            }
            if(digit < NUM_DIGITS)
            {
                System.out.println("YOur password does't contain two number!!!!");
            }
            if(specialCount < NUM_SPECIAL_CASE)
            {
                System.out.println("Your password does't contain one special character like @ , $ , % , # , etc!!!!");
            }
        }
    }
}
