import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val h = nextDouble()
    val l = nextDouble()
    val a = nextDouble()
    val b = nextDouble()

    if (a / 2 <= h && b <= l) {
        print("YES")
        return@with
    }

    if (b / 2 <= h && a <= l) {
        print("YES")
        return@with
    }

    print("NO")
}