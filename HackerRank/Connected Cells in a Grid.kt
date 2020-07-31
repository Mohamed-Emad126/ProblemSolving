import java.util.*
import kotlin.math.max

fun main() {
    val scan = Scanner(System.`in`)
    val c = scan.nextInt()
    val r = scan.nextInt()
    val arr = Array(c) { IntArray(r) }

    for (i in arr.indices) {
        for (j in arr[i].indices) {
            arr[i][j] = scan.nextInt()
        }
    }
    var mx = Int.MIN_VALUE
    for (i in arr.indices) {
        for (j in arr[i].indices) {
            if (arr[i][j] == 1) {
                mx = max(mx, tryToFill(arr, i, j, 0))
            }
        }
    }
    print(mx)
}

fun tryToFill(arr: Array<IntArray>, i: Int, j: Int, nm: Int): Int {
    var ans = 1
    //println("start: $i $j $nm")
    if (!(j >= 0 && i >= 0 && i < arr.size && j < arr[i].size))
        return 0
    if (arr[i][j] == 0)
        return 0
    /*println("end: $i $j $nm")
    for (x in arr.indices) {
        for (c in arr[i].indices) {
            print("${arr[x][c]} ")
        }
        println()
    }*/
    //println()
    arr[i][j] = 0
    ans += tryToFill(arr, i + 1, j, nm + 1)
    ans += tryToFill(arr, i - 1, j, nm + 1)
    ans += tryToFill(arr, i, j + 1, nm + 1)
    ans += tryToFill(arr, i, j - 1, nm + 1)
    ans += tryToFill(arr, i + 1, j + 1, nm + 1)
    ans += tryToFill(arr, i + 1, j - 1, nm + 1)
    ans += tryToFill(arr, i - 1, j + 1, nm + 1)
    ans += tryToFill(arr, i - 1, j - 1, nm + 1)
    return ans
}
