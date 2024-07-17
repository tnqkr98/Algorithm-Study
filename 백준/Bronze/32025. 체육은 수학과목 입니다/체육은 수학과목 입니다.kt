import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = nextInt()
    if (m < n) {
        print((m * 100) / 2)
    } else {
        print((n * 100) / 2)
    }
}