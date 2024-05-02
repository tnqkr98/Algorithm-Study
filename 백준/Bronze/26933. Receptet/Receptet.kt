import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var s = 0
    for (i in 0 until n) {
        val a = nextInt()
        val b = nextInt()
        val c = nextInt()

        if (b - a > 0) {
            s += (b - a) * c
        }
    }
    print(s)
}
