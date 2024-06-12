import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 1..n) {
        val a = nextInt()
        var s = ""
        if (a > 4500) {
            s = "Round 1"
        } else if (a > 1000) {
            s = "Round 2"
        } else if (a > 25) {
            s = "Round 3"
        } else {
            s = "World Finals"
        }
        println("Case #$i: $s")
    }
}
