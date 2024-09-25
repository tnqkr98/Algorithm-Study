import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var m = -9999999
    for (i in 1..n) {
        val a = nextInt()
        val t = a - (n + 1 - i)
        if (t > m) {
            m = t
        }
    }
    print(m)
}
