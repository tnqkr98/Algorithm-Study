import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    val n = nextInt()
    var s = 0
    for (i in 0 until n) {
        val t1 = nextInt()
        val t2 = nextInt()
        s += if (t1 * a < t2 * b) {
            t2 * b
        } else {
            t1 * a
        }
    }
    print(s)
}