import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val atBats = IntArray(n) { scanner.nextInt() }
    val totalBases = atBats.filter { it != -1 }.sum()
    val officialAtBats = atBats.count { it != -1 }
    val sluggingPercentage = totalBases.toDouble() / officialAtBats
    println(sluggingPercentage)
}