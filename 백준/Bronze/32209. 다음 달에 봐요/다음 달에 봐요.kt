import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var x = 0
    var res = "See you next month"
    for (i in 0 until n) {
        val a = nextInt()
        if (a == 1) {
            x += nextInt()
        } else {
            val y = nextInt()
            if (x < y) {
                res = "Adios"
                break
            } else {
                x-=y
            }
        }
    }
    print(res)
}