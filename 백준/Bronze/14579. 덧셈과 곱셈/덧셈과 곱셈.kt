import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    var s = 1
    for (i in a until b + 1) {
        s *= (i * (i + 1)) / 2
        s %= 14579
    }
    print(s)
}