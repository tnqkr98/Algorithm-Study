import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next()
    val k = nextInt()
    if (s == "annyong" && k % 2 == 1) print(k)
    else if (s == "annyong" && k % 2 == 0) {
        if (k + 1 <= n) print(k + 1)
        else print(k - 1)
    }

    if (s == "induck" && k % 2 == 0) print(k)
    else if (s == "induck" && k % 2 == 1) {
        if (k + 1 <= n) print(k + 1)
        else print(k - 1)
    }
}