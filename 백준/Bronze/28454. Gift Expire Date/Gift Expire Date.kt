import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = next()
    val y = s.substring(0, 4)
    val m = s.substring(5, 7)
    val d = s.substring(8, 10)
    var c = 0
    val n = nextInt()
    for (i in 0 until n) {
        val g = next()
        val y1 = g.substring(0, 4)
        val m1 = g.substring(5, 7)
        val d1 = g.substring(8, 10)
        if (y1 > y) {
            c++
            continue
        } else if (y1 == y) {
            if (m1 > m) {
                c++
                continue
            } else if (m1 == m) {
                if (d1 >= d) {
                    c++
                    continue
                }
            }
        }
    }
    println(c)
}