import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var b1 = nextInt()
    var b2 = nextInt()
    var res = true
    for (i in 1 until n) {
        val a = nextInt()
        val b = nextInt()
        if (a < b1 || b < b2) {
            res = false
            break
        }
        b1 = a
        b2 = b
    }
    if (res) print("yes")
    else print("no")
}