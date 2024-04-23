import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val a = nextInt()

    var c = 0
    for (i in 0 until n) {
        val r = nextInt()
        c += r / a;
    }
    print(c)
}