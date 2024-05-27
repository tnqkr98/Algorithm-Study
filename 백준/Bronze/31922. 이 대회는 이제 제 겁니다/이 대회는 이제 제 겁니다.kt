import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    val p = nextInt()
    if (a + p > b) print(a + p)
    else print(b)
}