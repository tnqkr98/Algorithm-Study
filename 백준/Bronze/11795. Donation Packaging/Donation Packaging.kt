import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var a = 0
    var b = 0
    var c = 0
    for (i in 0 until n) {
        a += nextInt()
        b += nextInt()
        c += nextInt()
        val m = arrayOf(a, b, c).min()
        if (m >= 30) {
            println(m)
            a -= m
            b -= m
            c -= m
        } else {
            println("NO")
        }
    }
}
