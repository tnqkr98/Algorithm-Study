import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 1..n * 5) {
        for (j in 1..n * 5) {
            if (i <= n || (i > n * 2 && i <= n * 3)) {
                print("@")
            } else {
                if (j <= n)
                    print("@")
            }
        }
        println()
    }
}