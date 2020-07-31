import java.util.*
import kotlin.collections.ArrayList

fun main() {
    val scan = Scanner(System.`in`)
    var t = scan.nextLine().trim().toInt()
    while (t-- != 0) {
        val n = scan.nextInt()
        val s = IntArray(n)
        var sm = 0
        var all = 0
        for (i in 0 until n) {
            s[i] = scan.nextInt();
            all += s[i]
        }
        var b = false
        for (i in 0 until n) {
            all -= s[i]
            if (i > 0) sm += s[i - 1]
            if (all == sm)
                b = true
        }
        if (b) {
            println("YES")
        } else {
            println("NO")
        }

    }
}
