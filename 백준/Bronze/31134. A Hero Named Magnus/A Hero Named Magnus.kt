import kotlin.math.ceil
import kotlin.math.max
import kotlin.math.min

fun main() {
    val t = readLine()!!.toInt()
    val results = StringBuilder()

    repeat(t) {
        val x = readLine()!!.toLong()
        results.append(2 * x - 1).append("\n")
    }

    print(results.toString())
}
