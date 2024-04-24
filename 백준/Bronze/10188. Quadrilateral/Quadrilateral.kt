import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for(i in 0 until n) {
        val a = nextInt()
        val b = nextInt()
        for (j in 0 until b) {
            for (k in 0 until a) {
                print("X")
            }
            println()
        }
        println()
    }
}