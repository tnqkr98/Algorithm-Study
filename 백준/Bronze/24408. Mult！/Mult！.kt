import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var c = 0
    for (i in 0 until n) {
        val a = nextInt()
        if (c == 0) {
            c = a
            continue
        }
        if (a % c == 0) {
            println(a)
            c = 0
        }
    }
}