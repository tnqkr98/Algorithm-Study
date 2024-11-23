import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var sm = 0
    var ss = 0
    for (i in 0 until n) {
        val t = next()
        val m = t.substring(0, 2).toInt()
        val s = t.substring(3, 5).toInt()
        sm += m
        ss += s
    }
    val rs = String.format("%02d", ss % 60)
    sm += ss / 60
    val rm = String.format("%02d", sm % 60)
    val h = String.format("%02d", sm / 60)
    print("$h:$rm:$rs")
}
