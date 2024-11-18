import java.util.*
import kotlin.math.sqrt

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n) {
        val a = nextInt()
        val s = sqrt(a.toDouble())
        if (a % 2 == 1 && s.toInt().toDouble() == s) {
            println("OS")
        } else if (a % 2 == 1) {
            println("O")
        } else if (s.toInt().toDouble() == s) {
            println("S")
        } else {
            println("EMPTY")
        }
    }
}