import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val m = nextInt()
    val n = nextInt()
    if(m == 1 || n == 1) {
        print(m*n)
    } else {
        print(m * 2 + (n - 2) * 2)
    }
}
