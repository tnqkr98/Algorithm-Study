import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n) {
        val s = next()
        var v = 0
        var c = 0
        s.forEach {
            if (it == 'a' || it == 'i' || it == 'o' || it == 'u' || it == 'e') v++
            else c++
        }
        println(s)
        if (v > c) println(1)
        else println(0)
    }
}