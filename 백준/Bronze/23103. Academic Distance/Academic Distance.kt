import java.util.*
import kotlin.math.abs

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var pa = nextInt()
    var pb = nextInt()
    var s = 0
    for(i in 1 until n) {
        val a = nextInt()
        val b = nextInt()
        s += abs(pa -a) + abs(pb -b)
        pa = a
        pb = b
    }
    print(s)
}