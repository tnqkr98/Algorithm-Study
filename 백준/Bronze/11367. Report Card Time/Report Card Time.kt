import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n) {
        val s = next()
        val m = nextInt()
        print("$s ")
        if (m >= 97) println("A+")
        else if (m >= 90) println("A")
        else if (m >= 87) println("B+")
        else if (m >= 80) println("B")
        else if (m >= 77) println("C+")
        else if (m >= 70) println("C")
        else if (m >= 67) println("D+")
        else if (m >= 60) println("D")
        else if (m >= 0) println("F")
    }
}