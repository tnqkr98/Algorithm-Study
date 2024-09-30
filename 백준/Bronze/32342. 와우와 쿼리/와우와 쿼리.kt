import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n) {
        val s = next()
        var cnt = 0
        s.forEachIndexed { index, c ->
            if (index > s.length - 3) {
                return@forEachIndexed
            }
            if (s.substring(index, index + 3) == "WOW") {
                cnt++
            }
        }
        println(cnt)
    }
}