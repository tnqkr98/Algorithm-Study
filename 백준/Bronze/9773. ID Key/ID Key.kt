import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n) {
        val s = next()
        var n1 = 0
        s.forEach {
            n1 += it.digitToInt()
        }
        val n2 = (s.toLong() % 1000) * 10
        val r = n1 + n2
        val rs = r.toString()
        if (r >= 1000) println(r.toString().substring(rs.length - 4))
        else println(r + 1000)
    }
}
