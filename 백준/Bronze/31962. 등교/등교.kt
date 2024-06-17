import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val x = nextInt()
    var max = -1
    for (i in 0 until n) {
        val a = nextInt()
        val b = nextInt()

        if (a + b <= x) {
            if (a > max) max = a
        }
    }
    print(max)
}
