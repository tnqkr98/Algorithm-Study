import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var c = 1
    for (i in 1..100) {
        if (i * i <= n) c = i
    }
    print("The largest square has side length $c.")
}