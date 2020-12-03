import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in); 
        int num = in.nextInt();
        int hour = in.nextInt();
        double salary_per_hour = in.nextDouble();

        System.out.printf("NUMBER = %d\n", num);
        System.out.printf("SALARY = U$ %.2f\n", hour * salary_per_hour);
    }
}
