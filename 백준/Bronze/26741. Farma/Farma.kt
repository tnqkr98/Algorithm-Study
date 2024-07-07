import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val c = nextInt()
    val d = nextInt()

    val a = (4 * c - d) / 2
    val b = (d - 2 * c) / 2
    print("$a $b")
}