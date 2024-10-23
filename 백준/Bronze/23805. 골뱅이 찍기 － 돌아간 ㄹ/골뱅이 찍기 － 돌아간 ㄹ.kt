import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 1..n * 5) {
        for (j in 1..n * 5) {
            if (i <= n) {
                if (j <= n * 3 || j > n * 4)
                    print("@")
                else
                    print(" ")
            } else if (i > n * 4) {
                if (j <= n || j > n * 2)
                    print("@")
                else
                    print(" ")
            } else {
                if (j <= n || (j > n * 2 && j <= n * 3) || j > n * 4)
                    print("@")
                else
                    print(" ")
            }
        }
        println()
    }
}