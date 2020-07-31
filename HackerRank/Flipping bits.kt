import java.lang.Math.pow
import java.util.*
import kotlin.math.pow

@ExperimentalStdlibApi
fun main() {
    val scan = Scanner(System.`in`)
    var t = scan.nextLine().trim().toInt()
    var mask = 0b11111111111111111111111111111111L
    while (t-- != 0) {
        val a = scan.nextLine().trim().toLong()
        println( "${(2.0.pow(32).toLong()) -a-1}")
    }
}
