import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var max = 0
    var min = 100001
    for (i in 0 until n) {
        val p = nextInt()
        if (max < p) {
            max = p
        }
        if (min > p) {
            min = p
        }
    }

    if (min - max / 2 >= 0) print(min - max / 2)
    else print(0)
}