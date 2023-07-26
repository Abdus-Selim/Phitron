import java.util.*;

public class string_reverse {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String word = input.nextLine();
        int len = word.length();

        for (int i = len-1; i >= 0; i--) {
            System.out.print(word.charAt(i));
        }

        input.close();
    }

}
