import java.util.*
import kotlin.math.abs

fun main() = with(Scanner(System.`in`)) {
    while (true) {
        var arr = Array(4) {
            nextInt()
        }
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0 && arr[3] == 0) break

        var n = 0

        while (!(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3])) {
            n++
            val a = abs(arr[0] - arr[1])
            val b = abs(arr[1] - arr[2])
            val c = abs(arr[2] - arr[3])
            val d = abs(arr[3] - arr[0])
            arr = arrayOf(a, b, c, d)
        }
        println(n)
    }
}