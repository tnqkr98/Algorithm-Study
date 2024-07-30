import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var c = 0
    for (i in 0 until 4) {
        val s = next()
        val n = nextInt()
        if (s == "Es") c += n * 21
        else c += n * 17
    }
    print(c)
}