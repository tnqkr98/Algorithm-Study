import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val w = nextDouble()
    val x = nextDouble()

    val cw = w - w * (x / 100.0)
    print((w - cw) / (cw / 100.0))
}