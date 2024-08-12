import java.util.*

fun main() = with(Scanner(System.`in`)) {
    while (true) {
        val a = nextInt()
        val b = nextInt()
        if (a == 0 && b == 0) break

        if (a == b) println("Undecided.")
        else if (a + b == 13) println("Never speak again.")
        else if (a > b) println("To the convention.")
        else println("Left beehind.")
    }
}