import java.util.*
import kotlin.math.abs

fun main() = with(Scanner(System.`in`)) {
    val w1 = nextInt()
    val h1 = nextInt()
    val w2 = nextInt()
    val h2 = nextInt()
    print(w1+w2+h1*2+h2*2+4+abs(w1-w2))
}