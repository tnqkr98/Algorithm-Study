import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var s = 0
    for (i in 0 until n) {
        val a = nextInt()
        s += a / 2 + a % 2
    }
    print(s)
}
