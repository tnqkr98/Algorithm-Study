import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    val c = nextInt()
    var min = 999
    if (a + b <= c) {
        val n = c - (a + b)
        if (n < min) min = n
    }
    if (c + b <= a) {
        val n = a - (c + b)
        if (n < min) min = n
    }
    if (a + c <= b) {
        val n = b - (a + c)
        if (n < min) min = n
    }
    if ((a == b && a == c) || min == 999) print(a + b + c)
    else print(a + b + c - min - 1)
}