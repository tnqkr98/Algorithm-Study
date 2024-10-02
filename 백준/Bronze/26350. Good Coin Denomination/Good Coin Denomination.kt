import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n) {
        var f = true
        val t = nextInt()
        val c = Array(t) {
            nextInt()
        }

        for (j in 1 until t) {
            if (c[j] >= c[j - 1] * 2) {
                continue
            } else {
                f = false
                break
            }
        }
        print("Denominations:")
        c.forEach {
            print(" $it")
        }
        println()
        if (f) {
            println("Good coin denominations!")
        } else {
            println("Bad coin denominations!")
        }
        println()
    }
}