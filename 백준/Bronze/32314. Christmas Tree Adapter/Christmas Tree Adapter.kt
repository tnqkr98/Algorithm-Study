import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val w = nextInt()
    val v = nextInt()
    val r = w / v
    if (a <= r) {
        print(1)
    } else {
        print(0)
    }
}