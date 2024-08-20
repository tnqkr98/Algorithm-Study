import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val a = 'A'.code
    for (i in 0 until n) {
        val m = nextInt()
        val c = next()[0].code
        for (j in 0 until m) {
            val t = (c - a + j) % 26 + a
            for (k in 0 until j + 1) {
                print(t.toChar())
            }
            println()
        }
        println()
    }
}
