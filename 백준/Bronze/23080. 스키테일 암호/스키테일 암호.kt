import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next()
    s.forEachIndexed { idx, it ->
        if (idx % n == 0) print(it)
    }
}