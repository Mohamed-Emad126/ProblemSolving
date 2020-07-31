import java.util.*
import kotlin.collections.ArrayList

fun main() {
    val scan = Scanner(System.`in`)
    var t = scan.nextLine().trim().toInt()
    val s: MutableList<Pair<Int, Int>> = ArrayList()
    for (i in 0 until t) {
        val ord = scan.nextInt()
        val pre = scan.nextInt()
        s.add(-(ord + pre) to -(i + 1))
    }
    kotlin.Comparator { a:Pair<Int, Int>, b:Pair<Int, Int> ->
        if(a.first != b.first)
            a.first - b.first
        else
            a.second - b.second
    }
    s.sortWith(kotlin.Comparator { a:Pair<Int, Int>, b:Pair<Int, Int> ->
        if(a.first != b.first)
            a.first - b.first
        else
            a.second - b.second
    })
    s.reverse()
    for (i in s.iterator()) {
        print("${-i.second} ")
    }
}
