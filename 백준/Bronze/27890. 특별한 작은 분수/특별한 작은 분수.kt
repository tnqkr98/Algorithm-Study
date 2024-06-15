import java.util.*
import kotlin.math.floor

fun main() = with(Scanner(System.`in`)) {
    var x = nextInt()
    val n = nextInt()

    for (i in 1..n) {
        x = if (x % 2 == 0) {
            floor(x.toDouble() / 2).toInt() xor 6
        } else {
            (x * 2) xor 6
        }
    }
    print(x)
}