import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in); 
        String name = in.next();
        double salary = in.nextDouble();
        double sells = in.nextDouble();

        double total = salary + sells * ((double) 15 / 100);
        System.out.printf("TOTAL = R$ %.2f\n", total);
    }
}
