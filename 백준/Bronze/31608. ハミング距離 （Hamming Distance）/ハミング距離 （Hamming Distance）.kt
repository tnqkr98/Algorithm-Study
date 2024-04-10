import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s1 = next()
    val s2 = next()
    var cnt = 0
    s1.forEachIndexed { index, c ->
        if(s2[index] != c) cnt++
    }
    print(cnt)
}