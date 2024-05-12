import java.util.*
import kotlin.math.sqrt

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    val c = nextInt()
    var res:Int = 0
    res = if(a == 0) {
        c*c - b
    } else if(b == 0) {
        c*c - a
    } else {
        sqrt(a.toDouble()+b.toDouble()).toInt()
    }
    print(res)
}