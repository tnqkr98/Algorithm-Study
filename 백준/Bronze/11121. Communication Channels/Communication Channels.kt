import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    repeat(t) {
        val input = scanner.next()
        val output = scanner.next()
        println(if (input == output) "OK" else "ERROR")
    }
}