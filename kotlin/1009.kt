import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);
    
    val name: String = sc.next();
    val salary: Double = sc.next().toDouble();
    val sells: Double = sc.next().toDouble();

    val total = salary + sells * (15.0 / 100.0);
    println("TOTAL = R$ ${total.format(2)}");
}

fun Double.format(digits: Int) = "%.${digits}f".format(this)