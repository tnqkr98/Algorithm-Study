import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val h1 = nextInt()
    val b1 = nextInt()
    val s1 = h1 * 3 + b1
    val h2 = nextInt()
    val b2 = nextInt()
    val s2 = h2 * 3 + b2
    if (s1 > s2) {
        print("1 ${s1 - s2}")
    } else if (s2 > s1) {
        print("2 ${s2 - s1}")
    } else {
        print("NO SCORE")
    }
}