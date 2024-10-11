import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next()
    for (i in 0 until n - 1) {
        if (s[i + 1] == 'J') println(s[i])
    }
}