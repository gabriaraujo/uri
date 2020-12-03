import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in); 
        
        int cod1 = in.nextInt();
        int n1 = in.nextInt();
        double v1 = in.nextDouble();

        int cod2 = in.nextInt();
        int n2 = in.nextInt();
        double v2 = in.nextDouble();

        double total = n1 * v1 + n2 * v2;
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
    }
}
