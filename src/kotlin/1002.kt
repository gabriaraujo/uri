import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);
    
    val r: Double = sc.next().toDouble();
    val area: Double = 3.14159 * (r * r);
    
    println("A=${area.format(4)}");
}

fun Double.format(digits: Int) = "%.${digits}f".format(this)