import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextDouble()
    val r = ((n / 4) * 100).toInt()
    print((r.toDouble() / 100))
}