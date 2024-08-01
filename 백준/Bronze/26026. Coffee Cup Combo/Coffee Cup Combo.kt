import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next()
    var c = 0
    var f = 0
    for (i in 0 until n) {
        if (s[i] == '1') {
            c++
            f = 2
        } else if (s[i] == '0' && f > 0) {
            f -= 1
            c++
        }
    }
    print(c)
}
