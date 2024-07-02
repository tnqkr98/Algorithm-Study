import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var last = 0
    var max = 0
    val n = nextInt()
    for (i in 0 until n) {
        val t = nextInt()
        val r = nextInt()
        if (r == 1) {
            val d = t - last
            last = t
            if (max < d) {
                max = d
            }
        }
    }
    print(max)
}