import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var n = nextInt()
    while (true) {
        val a = nextInt()
        if (a < n) n += a
        else break
    }
    print(n)
}