import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val t = nextInt()
    print("${(t-n+1)/n}")
}