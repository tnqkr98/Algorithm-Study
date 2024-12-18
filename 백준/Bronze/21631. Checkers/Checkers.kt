import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val a = scanner.nextLong()
    val b = scanner.nextLong()

    if (b == 0L) {
        println(0)
        return
    }

    if (a == 0L) {
        println(1)
        return
    }

    val maxStripes = if (b <= a + 1) {
        b
    } else {
        a + 1
    }

    println(maxStripes)
}