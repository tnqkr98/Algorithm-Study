import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    if (n % 3 == 1) print("U")
    else if (n % 3 == 2) print("O")
    else print("S")
}