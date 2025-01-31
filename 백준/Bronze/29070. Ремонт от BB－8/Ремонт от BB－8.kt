import java.util.*

fun main() {
    val (a, b, h, w) = readLine()!!.split(" ").map { it.toInt() }
    val vertical = (h + a - 1) / a
    val horizontal = (w + b - 1) / b
    println(vertical * horizontal)
}