import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n) {
        val a = nextInt()
        val x = a / 100
        val y = a % 100
        val res = (x * x + y * y) % 7
        if (res == 1) {
            println("YES")
        } else {
            println("NO")
        }
    }
}