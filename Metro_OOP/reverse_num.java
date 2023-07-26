/**
 * The above Java class takes an integer input from the user and reverses the digits of the number.
 */
import java.util.*;

public class reverse_num
{
    public static void main(String[] args) {
        int a;
        Scanner input = new Scanner(System.in);
        a = input.nextInt();
        int ans = 0;

        while(a>0)
        {
            int digit = a%10;
            ans = ans*10 + digit;
            a = a/10;
        }
        System.out.println(ans);
        input.close();
    }
}