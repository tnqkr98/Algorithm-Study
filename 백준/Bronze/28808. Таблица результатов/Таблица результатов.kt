import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = nextInt()
    var c = 0
    for (i in 0 until n) {
        val s = next()
        var flag = false
        s.forEach {
            if (it == '+') flag = true
        }
        if (flag) c++
    }
    print(c)
}
