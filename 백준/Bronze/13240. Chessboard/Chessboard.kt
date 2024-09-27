import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = nextInt()
    var b = 0
    for (i in 0 until n) {
        if (i % 2 == 0) b = 0
        else b = 1
        for (j in 0 until m) {
            if (b == 0) {
                print('*')
                b = 1
            } else {
                print(".")
                b = 0
            }
        }
        println()
    }
}