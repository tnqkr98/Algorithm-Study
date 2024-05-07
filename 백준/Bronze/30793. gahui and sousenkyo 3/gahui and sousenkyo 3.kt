import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val p = nextDouble()
    val x = nextDouble()
    val v = p / x
    if (v < 0.2) print("weak")
    else if (v >= 0.2 && v < 0.4) print("normal")
    else if (v >= 0.4 && v < 0.6) print("strong")
    else if (v >= 0.6) print("very strong")
}