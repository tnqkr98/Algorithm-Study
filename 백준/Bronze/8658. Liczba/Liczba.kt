import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var min = 1000000000
    var max = 0
    for (i in 1..n) {
        if (n % i != 0) {
            min = i
            break
        }
    }
    for (i in n downTo 1) {
        if (n % i != 0) {
            max = i
            break
        }
    }
    print("$min $max")
}
