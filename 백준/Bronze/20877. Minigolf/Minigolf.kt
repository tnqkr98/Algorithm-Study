import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var p = 0
    var s = 0
    for (i in 1..n) {
        p += if (i % 2 == 0) 3
        else 2

        val a = nextInt()
        s += if (a >= 7) 7
        else a
    }
    print(s - p)
}