import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var t = 0
    for (i in 1..n) {
        if (i * i < n) continue
        else {
            t = i
            break
        }
    }
    for (i in 1..t + 2) {
        for (j in 1..t + 2) {
            if (i == 1 || i == t + 2) print("x")
            else {
                if (j == 1 || j == t + 2) print("x")
                else print(".")
            }
        }
        println()
    }
}
