import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val x = nextInt()
    val n = nextInt()

    var sum = 0
    for (i in 0 until n) {
        val a = nextInt()
        val t = x - a
        sum += t
    }
    print(sum + x)
}