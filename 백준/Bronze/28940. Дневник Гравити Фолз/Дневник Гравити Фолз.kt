import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val w = nextInt()
    val h = nextInt()
    val n = nextInt()
    val a = nextInt()
    val b = nextInt()

    val min = if (w / a > h / b) h / b else w / a
    if (min == 0) {
        println(-1)
        return@with
    }
    val c = (w / a) * (h/b)
    val res = n / c + if (n % c != 0) 1 else 0
    print(res)
}