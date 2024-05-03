import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val map = mutableMapOf<String, String>()
    for (i in 0 until n) {
        val c = next()
        val s = next()
        map[s] = c
    }
    val s = next()
    for (i in s.indices step 4) {
        val t = s.substring(i,i+4)
        print(map[t] ?: "?")
    }

}