import java.util.*
import kotlin.math.roundToInt

fun main() = with(Scanner(System.`in`)) {
    val t = nextDouble()
    val r = ((t / 2) * (t / 2)).roundToInt()
    print(r)
}
