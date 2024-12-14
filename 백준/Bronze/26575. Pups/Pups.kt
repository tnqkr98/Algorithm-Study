import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for(i in 0 until n) {
        val d = nextDouble()
        val f = nextDouble()
        val p = nextDouble()
        println("$%.2f".format(d*f*p))
    }
}