import java.util.*
import kotlin.math.abs

fun main() = with(Scanner(System.`in`)) {
    while (true) {
        val n = nextInt()
        if (n == 0) break

        var min = 100000
        var num = 0
        for (i in 1..n) {
            val a = nextInt()
            val dif = abs(a - 2023)
            if (dif < min) {
                min = dif
                num = i
            }
        }
        println(num)
    }
}