import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var max = 0
    var maxs = ""
    for (i in 0 until n) {
        val m = nextInt()
        val s = next()
        val c = next()
        if (c == "Russia") {
            if (max < m) {
                max = m
                maxs = s
            }
        }
    }
    print(maxs)
}