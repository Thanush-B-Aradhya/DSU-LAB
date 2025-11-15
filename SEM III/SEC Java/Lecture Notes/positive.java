import java.util.*;

class Positive {
    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        System.out.println("Enter the number:");

        int a = Sc.nextInt();

        if (a < 0) {
            System.out.println("The number is negative");
        } else {
            System.out.println("The number is positive");
        }
    }
}
