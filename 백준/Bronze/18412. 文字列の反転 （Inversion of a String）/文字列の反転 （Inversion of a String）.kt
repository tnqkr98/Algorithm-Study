import java.util.*

fun main() {
    val (n, a, b) = readLine()!!.split(" ").map { it.toInt() }
    val s = readLine()!!.toCharArray()
    s.reverse(a - 1, b)
    println(String(s))
}