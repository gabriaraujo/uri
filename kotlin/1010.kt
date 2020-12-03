import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);
    
    val cod1: Int = sc.next().toInt();
    val n1: Int = sc.next().toInt();
    val v1: Double = sc.next().toDouble();

    val cod2: Int = sc.next().toInt();
    val n2: Int = sc.next().toInt();
    val v2: Double = sc.next().toDouble();

    val total = n1 * v1 + n2 * v2;
    println("VALOR A PAGAR: R$ ${total.format(2)}");
}

fun Double.format(digits: Int) = "%.${digits}f".format(this)