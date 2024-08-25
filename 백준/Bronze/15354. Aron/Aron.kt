import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var c = 0
    var l = ' '
    for (i in 0 until n) {
        val s = next()[0]
        if (s != l) {
            c++
            l = s
        }
    }
    println(c + 1)
}