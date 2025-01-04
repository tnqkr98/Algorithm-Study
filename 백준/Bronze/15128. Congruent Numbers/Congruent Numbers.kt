import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val p1 = nextLong()
    val q1 = nextLong()
    val p2 = nextLong()
    val q2 = nextLong()
    if ((p1 * p2) % (q1 * q2 * 2) == 0.toLong()) print("1")
    else print("0")
}