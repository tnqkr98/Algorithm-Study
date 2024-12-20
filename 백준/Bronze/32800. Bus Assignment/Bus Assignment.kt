import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var c = 0
    var max = 0
    for (i in 0 until n) {
        val a = nextInt()
        val b = nextInt()
        c -= a
        c += b
        if (max < c) {
            max = c
        }
    }
    print(max)
}