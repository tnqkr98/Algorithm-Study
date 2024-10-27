import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 1..n + 2) {
        for (j in 1..n + 2) {
            if (i == 1 || i == n + 2) {
                print("@")
            } else {
                if (j == 1 || j == n + 2) {
                    print("@")
                } else {
                    print(" ")
                }
            }
        }
        println()
    }
}