import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);
    
    val num: Int = sc.next().toInt();
    val hour: Int = sc.next().toInt();
    val salary_per_hour: Double = sc.next().toDouble();
    
    println("NUMBER = ${num}");
    println("SALARY = U$ ${(hour * salary_per_hour).format(2)}");
}

fun Double.format(digits: Int) = "%.${digits}f".format(this)