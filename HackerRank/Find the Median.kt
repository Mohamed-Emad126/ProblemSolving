import java.util.*

fun main() {
    val scan = Scanner(System.`in`)
    val t = scan.nextInt()
    val arr = IntArray(t)

    for (i in 0 until t) {
        arr[i] = scan.nextInt()
    }
    arr.sort()
    
    println(arr[arr.size/2])

}
