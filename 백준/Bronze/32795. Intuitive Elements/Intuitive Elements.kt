import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n) {
        val s1 = next()
        val s2 = next()
        val isAll = s2.all {
            s1.contains(it)
        }
        if (isAll) println("YES")
        else println("NO")
    }
}