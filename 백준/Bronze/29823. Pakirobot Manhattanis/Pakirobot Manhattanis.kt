import java.util.*
import kotlin.math.abs

fun main() = with(Scanner(System.`in`)) {
    nextInt()
    val str = next()
    val n = str.count { it == 'N' }
    val s = str.count { it == 'S' }
    val w = str.count { it == 'W' }
    val e = str.count { it == 'E' }
    print(abs(n - s) + abs(w - e))
}