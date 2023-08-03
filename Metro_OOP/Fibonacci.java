import java.util.*;

public class Fibonacci {
    public static void main(String[] args) {
        int limit, first = 0, second = 1, fibo;
        Scanner input = new Scanner(System.in);
        limit = input.nextInt();
        input.close();
        System.out.print(first+ " "+second+" ");

        for (int i = 2; i <= limit; i++) {
            fibo = first + second;
            first = second;
            second = fibo;
            System.out.print(fibo + " ");
        }
        System.out.print("\n");
        System.out.println("Here is the " + limit + "th Fibonacci number: " + second + "\n");
    }
}
