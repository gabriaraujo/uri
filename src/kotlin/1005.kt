import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);
    
    val a: Double = sc.next().toDouble();
    val b: Double = sc.next().toDouble();
    
    println("MEDIA = ${((a * 3.5 + b * 7.5) / 11).format(5)}");
}

fun Double.format(digits: Int) = "%.${digits}f".format(this)