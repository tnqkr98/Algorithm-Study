import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val p = nextInt()
    val q = nextInt()
    val a = nextInt()
    val b = nextInt()
    if (p < q) {
        print(p * a + ((q - p) * b))
    } else if (p == q) {
        print(p * a)
    } else {
        print(q * a)
    }
}
