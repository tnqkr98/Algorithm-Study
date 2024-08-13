import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val k = nextInt()
    val n = nextInt()
    var s = 0
    for (i in 1 until n) {
        println(i)
        s += i
    }
    println(k - s)
}

