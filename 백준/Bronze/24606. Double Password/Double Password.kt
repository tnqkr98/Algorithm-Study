import java.util.*
import kotlin.math.pow

fun main() = with(Scanner(System.`in`)) {
    val s = next()
    val t = next()
    var d = 0

    for (i in 0 until 4) {
        if (s[i] != t[i]) d++
    }
    print(2.toDouble().pow(d.toDouble()).toInt())
}