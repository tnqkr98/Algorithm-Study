import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var s = 0.0
    for (i in 0 until n) {
        val q = nextDouble()
        val y = nextDouble()
        val r = q * y
        s += r
    }
    print(s)
}
