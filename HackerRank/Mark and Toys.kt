import java.util.*

fun main() {
    val scan = Scanner(System.`in`)
    val t = scan.nextInt()
    var k = scan.nextInt()
    val arr = IntArray(t)

    for (i in 0 until t) {
        arr[i] = scan.nextInt()
    }
    arr.sort()
    var nm = 0
    for (i in arr.indices) {
        if(k <= 0 || arr[i] > k)
            break
        k -=arr[i]
        nm++
    }
    println(nm)

}
