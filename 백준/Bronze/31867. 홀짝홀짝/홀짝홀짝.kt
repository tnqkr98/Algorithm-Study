import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next()

    var e = 0
    var o = 0
    s.forEach {
        if (it.digitToInt() % 2 == 0) {
            e++
        } else {
            o++
        }
    }
    if (e > o) print(0)
    else if (o > e) print(1)
    else print(-1)
}