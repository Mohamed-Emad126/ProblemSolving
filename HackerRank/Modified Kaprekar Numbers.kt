import java.util.*
import kotlin.math.floor

fun main() {

    val scan = Scanner(System.`in`)

    val p = scan.nextLine().trim().toInt()

    val q = scan.nextLine().trim().toInt()

    var a = 0
    for (i in p..q) {
        if (isKapreaker(i.toLong())) {
            a++
            print("$i ")
        }
    }
    if(a == 0){
        print("INVALID RANGE")
    }

}

fun isKapreaker(i: Long): Boolean {
    val ii:Long = (i*i)
    val num = ii.toString()
    var s: String = ""
    var t: String = ""
    val d = floor((num.length.toDouble() / 2))
    for (r in 0 until  d.toInt()) {
        s += num[r]
    }
    for (r in d.toLong() until (num.length)) {
        t += num[r.toInt()]
    }
    //println("$i - $ii -> ${s} + ${t}")
    if(s != ""){
        val s = s.toLong()
        if(t != ""){
            if(t.toLong() + s == i){
                return true
            }
        }
        else{
            if( s == i){
                return true
            }
        }
    }
    else{
        val t = t.toLong()
        if( t == i){
            return true
        }
    }
    return false
}
