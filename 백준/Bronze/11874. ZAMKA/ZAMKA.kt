import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val l = nextInt()
    val d = nextInt()
    val x = nextInt()

    var max = 0
    var min = d
    for (i in l until d + 1) {
        var s = 0
        i.toString().forEach {
            s += it.digitToInt()
        }
        if (s == x) {
            if (i < min) min = i
            if (i > max) max = i
        }
    }
    println(min)
    println(max)
}