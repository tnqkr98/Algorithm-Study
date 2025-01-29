import java.util.*

fun main() {
    val (A, B, C) = readLine()!!.split(" ").map { it.toInt() }
    var coins = 0
    var days = 0

    while (coins < C) {
        days++
        coins += A
        if (days % 7 == 0) {
            coins += B
        }
    }

    println(days)
}