import java.util.*

fun main() = with(Scanner(System.`in`)) {
    while (true) {
        val n = nextInt()
        if (n == 0) break
        val arr = Array(n) {
            nextInt()
        }
        var s = arr[0] + arr[1] + arr[2]
        var max = s
        for (i in 3 until n) {
            s = s + arr[i] - arr[i - 3]
            if (s > max) max = s
        }
        println(max)
    }
}