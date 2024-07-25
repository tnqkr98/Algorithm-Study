import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val t = nextInt()
    for (i in 0 until t) {
        val n = nextInt()
        val a = nextInt()
        val d = nextInt()
        var s = a

        for (j in 1 until n) {
            s += a + (d * j)
        }
        println(s)
    }
}