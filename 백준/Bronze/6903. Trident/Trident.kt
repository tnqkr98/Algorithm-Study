import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val t = nextInt()
    val s = nextInt()
    val h = nextInt()

    for (i in 0..t + h) {
        if (i <= t) print("*")
        else print(" ")
        for (j in 0 until s) {
            if (i != t) print(" ")
            else print("*")
        }
        print("*")
        if (i <= t) {
            for (j in 0 until s) {
                if (i != t) print(" ")
                else print("*")
            }
            println("*")
        } else {
            println()
        }
    }
}