/**
 * The Selim class prints a message to the console saying "Hello World! Hi this is Selim".
 */
import java.util.Scanner;
class Selim
{
    public static void main(String[] args)
    {
        int a, b, c;
        Scanner input = new Scanner(System.in);
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        float average = (a+b+c)/3;
        System.out.println("This is the Average: "+ average);
        input.close();
        }
}