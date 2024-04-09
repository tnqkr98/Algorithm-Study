import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next()
    if (s.all { it == s[0] }) {
        print("Yes")
    } else {
        print("No")
    }
}
