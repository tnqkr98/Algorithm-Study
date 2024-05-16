import java.util.*

fun main() = with(Scanner(System.`in`)) {
    while (true) {
        val n = nextInt()
        var m = nextInt()
        if(n == 0 && m == 0) break

        m /= n

        var s = 0
        for (i in 0 until n) {
            val a = nextInt()
            s += if (a >= m) m
            else a
        }
        println(s)
    }
}