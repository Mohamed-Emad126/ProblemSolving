import java.util.*

fun main() {
    val scan = Scanner(System.`in`)
    var t = scan.nextInt()

    while (t-- != 0) {
        val nm = scan.nextLong()
        val s = nm.toString()
        var ans = 0

        for (i in s.toCharArray().indices) {
            if(Integer.valueOf(s[i].toString()) != 0 && (nm % Integer.valueOf(s[i].toString())).toInt() == 0){
                ans++
            }
        }
        println(ans)
    }
}
