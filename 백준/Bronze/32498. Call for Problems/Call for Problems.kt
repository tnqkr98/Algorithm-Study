import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var c = 0
    for (i in 0 until n) {
        val a = nextInt()
        if (a % 2 == 1) c++
    }
    print(c)
}