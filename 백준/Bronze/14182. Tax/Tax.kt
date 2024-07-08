import java.util.*

fun main() = with(Scanner(System.`in`)) {
    while (true) {
        val c = nextInt()
        if (c == 0) break
        if (c <= 1000000) println(c)
        else if (c <= 5000000) println((c * 0.9).toInt())
        else println((c * 0.8).toInt())
    }
}
