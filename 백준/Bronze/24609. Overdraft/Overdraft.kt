import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var s = 0
    var min = 1000000
    for (i in 0 until n) {
        val a = nextInt()
        s += a
        if (s < min) min = s
    }

    if (min >= 0) print(0)
    else print(min * -1)
}
