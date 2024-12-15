import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val results = mutableListOf<Int>()

    while (scanner.hasNextInt()) {
        val n = scanner.nextInt()
        val s = scanner.nextInt()
        results.add(s / (n + 1))
    }

    results.forEach(::println)
}