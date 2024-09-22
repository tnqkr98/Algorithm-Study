import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var h1 = nextInt()
    val d1 = nextInt()
    val t1 = nextInt()

    var h2 = nextInt()
    val d2 = nextInt()
    val t2 = nextInt()

    h1 -= d2
    h2 -= d1
    var t = 1
    while (h1 > 0 && h2 > 0) {
        if (t % t1 == 0) {
            h2 -= d1
        }

        if (t % t2 == 0) {
            h1 -= d2
        }

        t++
    }

    if (h1 <= 0 && h2 <= 0) print("draw")
    else if (h1 <= 0) print("player two")
    else print("player one")
}