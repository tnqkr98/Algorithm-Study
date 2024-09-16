import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a1 = nextInt()
    val a2 = nextInt()
    val a3 = nextInt()
    val b1 = nextInt()
    val b2 = nextInt()
    val b3 = nextInt()
    val s1 = a1 + a2 * 2 + a3 * 3
    val s2 = b1 + b2 * 2 + b3 * 3
    if (s1 > s2) print(1)
    else if (s2 > s1) print(2)
    else print(0)
}