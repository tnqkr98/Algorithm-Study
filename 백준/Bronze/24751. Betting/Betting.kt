import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val a = scanner.nextInt()
    val ratio1 = 100.0 / a - 1
    val ratio2 = 100.0 / (100 - a) - 1
    println(String.format("%.10f", ratio1 + 1))
    println(String.format("%.10f", ratio2 + 1))
}