import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val c4 = 0.229 * 0.324 * 2
    val a3 = 0.297 * 0.42 *2
    val a4 = 0.21 * 0.297
    val w1 = nextDouble()
    val w2 = nextDouble()
    val w3 = nextDouble()
    val r = c4*w1 + a3*w2 + a4*w3
    print(r)
}