import java.util.*;

public class prime_check {
    public static void main(String[] args) {
        int a;
        Scanner input = new Scanner(System.in);
        a = input.nextInt();

        if (a == 1 || a == 2) {
            System.out.println("Sorry. Not a prime!");
            return;
        }

        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                System.out.println("Sorry. Not a prime!");
                return;
            }
        }
        System.out.println("Yes, prime!");
        input.close();
    }
}