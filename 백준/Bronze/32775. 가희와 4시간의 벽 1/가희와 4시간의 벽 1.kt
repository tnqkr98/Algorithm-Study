import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    if (b < a) print("flight")
    else print("high speed rail")
}