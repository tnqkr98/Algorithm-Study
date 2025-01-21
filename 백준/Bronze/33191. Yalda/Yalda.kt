import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until 3) {
        val a = nextInt()
        if (a <= n) {
            when (i) {
                0 -> print("Watermelon")
                1 -> print("Pomegranates")
                2 -> print("Nuts")
            }
            return@with
        }
    }
    print("Nothing")
}