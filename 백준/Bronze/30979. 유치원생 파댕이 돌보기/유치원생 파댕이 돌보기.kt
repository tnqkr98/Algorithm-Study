import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val t = nextInt()
    val n = nextInt()
    var c = 0
    for (i in 0 until n) {
        val f = nextInt()
        c += f
    }
    if (c >= t) print("Padaeng_i Happy")
    else print("Padaeng_i Cry")
}