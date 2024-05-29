import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = mutableMapOf<String, Int>()
    for (i in 0 until n) {
        val s = next()
        val c = nextInt()
        m[s] = c
    }
    val jin = m["jinju"]!!
    var c = 0
    m.forEach {
        if (it.value > jin) c++
    }
    println(m["jinju"])
    print(c)
}