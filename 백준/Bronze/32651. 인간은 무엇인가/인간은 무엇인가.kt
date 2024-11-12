import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    if(n % 2024 == 0 && n <= 100000) print("Yes")
    else print("No")
}