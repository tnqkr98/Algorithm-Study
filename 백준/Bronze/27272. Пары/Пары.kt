import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val arr = Array(4) {
        nextInt()
    }
    val s = arr.sorted()
    print(s[0] * s[1] + s[2] * s[3])
}