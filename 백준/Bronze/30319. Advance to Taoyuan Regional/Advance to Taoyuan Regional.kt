import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = next()
    val m = s.substring(5, 7).toInt()
    val d = s.substring(8, 10).toInt()
    if (m == 9 && d <= 16) print("GOOD")
    else if (m <= 8) print("GOOD")
    else print("TOO LATE")
}