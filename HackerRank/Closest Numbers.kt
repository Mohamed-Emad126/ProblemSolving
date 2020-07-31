import java.util.*
import kotlin.math.*

fun main() {
    val scan = Scanner(System.`in`)
    val t = scan.nextLine().trim().toInt()
    val arr = IntArray(t)

    for (i in 0 until t) {
        arr[i] = scan.nextInt()
    }
    arr.sort()
    //println(arr.contentToString())
    var mn = Int.MAX_VALUE
    for (i in 1 until arr.size) {
        mn = min(mn, arr[i] - arr[i - 1])
    }
    for (i in 1 until arr.size) {
        if ((arr[i] - arr[i - 1]) == mn) {
            print("${arr[i - 1]} ${arr[i]} ")
        }
    }

}
