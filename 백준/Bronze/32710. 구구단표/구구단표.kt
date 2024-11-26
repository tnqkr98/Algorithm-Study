import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val set = mutableSetOf<Int>()
    for (i in 2..9) {
        for (j in 1..9) {
            set.add(i * j)
        }
    }
    if (n <= 10 || set.contains(n)) print(1)
    else print(0)
}