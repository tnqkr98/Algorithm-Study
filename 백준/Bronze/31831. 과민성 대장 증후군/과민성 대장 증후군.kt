import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = nextInt()
    var s = 0
    var c = 0
    for (i in 0 until n) {
        val a = nextInt()
        s += a
        if (s < 0) s = 0
        if (s >= m) c++
    }
    print(c)
}