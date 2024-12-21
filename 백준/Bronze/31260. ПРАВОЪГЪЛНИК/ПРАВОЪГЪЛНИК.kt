import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val m = nextLong()
    val c = nextLong()
    val d = nextLong()
    val tc = m * 100 + c
    val r = (tc - d * 2) / 4
    val r2 = r + d
    println("${r2 / 100} ${r2 % 100}")
    print("${r / 100} ${r % 100}")
}