import java.util.*

fun main() = with(Scanner(System.`in`)) {
    while (true) {
        val n = nextInt()
        if (n == -1) break
        var s = 0
        var m = 0
        for (i in 0 until n) {
            val p = nextInt()
            val t = nextInt()
            m += (t - s) * p
            s = t
        }
        println("$m miles")
    }
}