import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()

    var n = 2
    while (true) {
        if (a * n <= b * (n - 1)) {
            print(n)
            break
        }
        n++
    }
}