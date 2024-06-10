import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = next()
    for (num in n.toInt()..1000000000) {
        var sum = 0
        num.toString().map { it.digitToInt() }.forEach { sum += it }
        if (num % sum == 0) {
            print(num)
            break
        }
    }
}
