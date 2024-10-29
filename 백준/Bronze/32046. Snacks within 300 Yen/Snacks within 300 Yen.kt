import java.util.*

fun main() = with(Scanner(System.`in`)) {
    while (true) {
        val n = nextInt()
        if (n == 0) break

        var s = 0
        for (i in 0 until n) {
            val a = nextInt()
            s += a
            if (s > 300) {
                s -= a
            }
        }
        println(s)
    }
}