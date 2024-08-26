import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val h = nextInt()
    val m = nextInt()
    var r = -1
    for (i in 1..m) {
        val a = -6 * (i * i * i * i) + h * (i * i * i) + 2 * (i * i) + i
        if (a <= 0) {
            r = i
            break
        }
    }
    if (r == -1) {
        print("The balloon does not touch ground in the given time.")
    } else {
        print("The balloon first touches ground at hour: $r")
    }
}