import java.util.*

fun main() = with(Scanner(System.`in`)) {
    while (true) {
        val a = nextInt()
        val b = nextInt()
        val r = a - b
        if (a == 0 && b == 0) break
        if (r <= 1) {
            println("0 0")
            continue
        }
        if (r % 2 == 0) {
            println("${r / 2} 0")
        } else {
            println("${r / 2 - 1} 1")
        }
    }
}