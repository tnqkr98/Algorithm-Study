import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var cnt = 0
    for (i in 0 until 8) {
        val s = next()
        s.forEachIndexed { j, c ->
            if ((i + j) % 2 == 0 && c == 'F') cnt++
        }
    }
    print(cnt)
}