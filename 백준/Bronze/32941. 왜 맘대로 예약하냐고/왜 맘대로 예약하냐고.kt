import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val t = nextInt()
    val x = nextInt()
    val n = nextInt()
    var b = true
    for (i in 0 until n) {
        val g = nextInt()
        val arr = Array(g) {
            nextInt()
        }
        if (!arr.contains(x)) {
            b = false
            break
        }
    }
    if (b) print("YES")
    else print("NO")
}