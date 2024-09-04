import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n) {
        var s = 0
        for (j in 0 until 3) {
            val a = nextInt()
            print("$a ")
            s += a
        }
        if (s == 180) println("Seems OK")
        else println("Check")
    }
}