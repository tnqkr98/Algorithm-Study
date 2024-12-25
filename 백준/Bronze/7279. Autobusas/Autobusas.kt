import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val k = nextInt()
    var s = 0
    var m = 0
    for (i in 0 until n) {
        val a = nextInt()
        val b = nextInt()
        s += a - b
        if (s - k > 0 && s - k > m) {
            m = s - k
        }
    }
    print(m)
}
