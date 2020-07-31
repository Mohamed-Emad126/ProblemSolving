import java.util.*
import kotlin.collections.*


val lst = ArrayList<Int>()
fun walk(arr: Array<String>, i: Int, j: Int, cr: Int) {
    if (!(j >= 0 && i >= 0 && i < arr.size && j < arr[i].length))
        return
    if (arr[i][j] == 'X')
        return
    if (arr[i][j] == '*')
        return

    val replaceRange: String = arr[i].replaceRange(j, j + 1, "X")
    arr[i] = String(replaceRange.toCharArray())

    var ac = 0
    if (i + 1 < arr.size) {
        if (arr[i + 1][j] == '.' || arr[i + 1][j] == '*')
            ac++
    }
    if (i - 1 >= 0) {
        if (arr[i - 1][j] == '.' || arr[i - 1][j] == '*')
            ac++
    }
    if (j + 1 < arr[i].length) {
        if (arr[i][j + 1] == '.' || arr[i][j + 1] == '*')
            ac++
    }
    if (j - 1 >= 0) {
        if (arr[i][j - 1] == '.' || arr[i][j - 1] == '*')
            ac++
    }
    if (ac >= 2) {
        walk(arr, i + 1, j, cr + 1)
        walk(arr, i - 1, j, cr + 1)
        walk(arr, i, j + 1, cr + 1)
        walk(arr, i, j - 1, cr + 1)
    } else {
        walk(arr, i + 1, j, cr)
        walk(arr, i - 1, j, cr)
        walk(arr, i, j + 1, cr)
        walk(arr, i, j - 1, cr)
    }
    lst.add(cr)
}

fun countLuck(matrix: Array<String>, k: Int): String {
    for (i in matrix.indices) {
        for (j in matrix[i].indices) {
            if (matrix[i].toCharArray()[j] == 'M') {
                walk(matrix, i, j, 0)
            }
        }
    }
    lst.sortDescending()
    return if (k == lst[0]) "Impressed" else "Oops!"
}

fun main() {
    val scan = Scanner(System.`in`)

    val t = scan.nextLine().trim().toInt()

    for (tItr in 1..t) {
        val nm = scan.nextLine().split(" ")

        val n = nm[0].trim().toInt()

        val m = nm[1].trim().toInt()

        val matrix = Array(n) { "" }
        for (i in 0 until n) {
            val matrixItem = scan.nextLine()
            matrix[i] = matrixItem
        }

        val k = scan.nextLine().trim().toInt()

        val result = countLuck(matrix, k)
        lst.clear()

        println(result)
    }
}
