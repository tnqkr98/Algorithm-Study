import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = next()
    val set = s.toList().toSet()
    val n = nextInt()
    for (i in 0 until n) {
        val a = next()
        var cor = 0
        var hav = 0
        a.forEachIndexed { index, it ->
            if (s[index] == it) cor++
            if (set.contains(it)) hav++
        }
        println("$hav $cor")
    }
}