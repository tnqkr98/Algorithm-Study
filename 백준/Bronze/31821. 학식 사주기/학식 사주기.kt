import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val a = Array(n) {
        nextInt()
    }
    val m = nextInt()
    var sum = 0
    for (i in 0 until m) {
        val t = nextInt()
        sum += a[t - 1]
    }
    print(sum)
}