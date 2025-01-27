import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    val results = StringBuilder()

    repeat(t) {
        val a = scanner.nextLong()
        val b = scanner.nextLong()
        val c = scanner.nextLong()

        val maxTwoRubleCoins = c / 2
        val neededTwoRubleCoins = minOf(maxTwoRubleCoins, b)
        val remainingAmount = c - neededTwoRubleCoins * 2

        if (remainingAmount <= a) {
            results.append("YES\n")
        } else {
            results.append("NO\n")
        }
    }

    print(results.toString())
}