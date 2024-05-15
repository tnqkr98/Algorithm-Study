import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = next()
    val ss = s.substring(0..4)
    val n = nextInt()
    var c = 0
    for (i in 0 until n) {
        val a = next()
        val aa = a.substring(0..4)
        if (aa == ss) c++
    }
    print(c)
}