import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val x = nextInt()
    val y = nextInt()
    val n = nextInt()

    for (i in 1..n) {
        var f = false
        var b = false
        if (i % x == 0) f = true
        if (i % y == 0) b = true
        if (f && b) println("FizzBuzz")
        else if (f) println("Fizz")
        else if (b) println("Buzz")
        else println(i)
    }
}
