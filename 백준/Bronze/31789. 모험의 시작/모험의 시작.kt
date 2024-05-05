import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val x = nextInt()
    val s = nextInt()

    var b = false

    for (i in 0 until n) {
        val c = nextInt()
        val p = nextInt()

        if (c <= x && p > s) {
            b = true
        }
    }

    if (b) print("YES")
    else print("NO")
}