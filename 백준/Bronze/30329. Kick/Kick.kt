import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = next()
    var c = 0
    var startIndex = 0
    while (startIndex < s.length) {
        val index = s.indexOf("kick", startIndex)
        if (index >= 0) {
            c++
            startIndex = index + 3
        } else {
            break
        }
    }
    print(c)
}