import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);
    
    val a: Double = sc.next().toDouble();
    val b: Double = sc.next().toDouble();
    val c: Double = sc.next().toDouble();
    
    val result: Double = (a * 2 + b * 3 + c * 5) / 10;
    println("MEDIA = ${result.format(1)}");
}

fun Double.format(digits: Int) = "%.${digits}f".format(this)