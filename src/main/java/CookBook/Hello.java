package CookBook;
import java.util.Scanner;
/**
 * Hello world
 */
public class Hello {
    public static void main(String[] args) {
        System.out.println("Hello world");
        Scanner in = new Scanner(System.in);
        System.out.println("Input cm: ");
        int cm = in.nextInt();
        double inch = cm * 0.39;
        System.out.println("In inches" + inch);
    }
}