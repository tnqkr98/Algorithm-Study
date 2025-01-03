import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val s = scanner.next()
    var currentBox = 1
    var countBox3 = 0

    for (ch in s) {
        currentBox = when (ch) {
            'L' -> if (currentBox == 1) 1 else currentBox - 1
            'R' -> if (currentBox == 3) 3 else currentBox + 1
            else -> currentBox
        }
        if (currentBox == 3) countBox3++
    }

    println(countBox3)
}