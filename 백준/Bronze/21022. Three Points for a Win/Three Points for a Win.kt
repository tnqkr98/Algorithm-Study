import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var s = 0
    val a = Array(n) { nextInt() }
    val b = Array(n) {
        nextInt()
    }
    for (i in 0 until n) {
        if (a[i] > b[i]) s += 3
        else if (a[i] == b[i]) s += 1
    }
    print(s)
}