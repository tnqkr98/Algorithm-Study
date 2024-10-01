import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    val c = nextInt()
    var r = 0
    for (i in 0 until c) {
        val t = nextInt()
        if (t >= a && t <= b) {
            r++
        }
    }
    print(r)
}