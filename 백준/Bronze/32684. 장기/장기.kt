import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = arrayOf(13, 7, 5, 3, 3, 2)
    var s1 = 0
    for (i in 0 until 6) {
        val a = nextInt()
        s1 += a * s[i]
    }
    var s2 = 1.5
    for (i in 0 until 6) {
        val a = nextInt()
        s2 += a * s[i]
    }
    if (s1 > s2) print("cocjr0208")
    else print("ekwoo")
}
