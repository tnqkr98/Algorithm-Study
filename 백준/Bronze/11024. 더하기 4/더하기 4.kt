import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextLine().toInt()

    for(i in 0 until n) {
        val s = nextLine().split(' ').map { it.toIntOrNull() }.mapNotNull { it }.sum()
        println(s)
    }
}
