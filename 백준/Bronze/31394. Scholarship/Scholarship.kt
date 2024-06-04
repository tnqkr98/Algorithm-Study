import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var s = 0
    var ec = 0
    var sc = 0
    for (i in 0 until n) {
        val a = nextInt()
        when (a) {
            5 -> ec++
            3 -> sc++
        }
        s += a
    }
    val av = s.toDouble() / n.toDouble()
    if (sc > 0) {
        print("None")
    } else if (ec == n) {
        print("Named")
    } else if (av >= 4.5) {
        print("High")
    } else {
        print("Common")
    }
}