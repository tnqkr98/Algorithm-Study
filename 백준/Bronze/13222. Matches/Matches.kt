import java.util.*
import kotlin.math.sqrt

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val w = nextDouble()
    val h = nextDouble()
    val l = sqrt(w*w + h*h)
    for(i in 0 until n) {
        val a = nextInt()
        if(a<=l) println("YES")
        else println("NO")
    }
}