import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var max = 0
    var s = ""
    for (i in 0 until 7) {
        val ss = next()
        val n = nextInt()
        if (n > max) {
            max = n
            s = ss
        }
    }
    print(s)
}
