import java.util.*
import kotlin.math.sqrt

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    print((sqrt((n.toDouble()*2))*4).toInt())
}