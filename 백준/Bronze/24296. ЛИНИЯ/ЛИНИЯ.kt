import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var n = nextInt()
    while (n % 2 != 0) {
        n -= (n / 2)
    }
    print(n)
}