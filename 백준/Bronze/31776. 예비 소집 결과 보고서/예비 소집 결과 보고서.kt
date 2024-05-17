import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var c = 0
    for (i in 0 until n) {
        val a1 = nextInt()
        val a2 = nextInt()
        val a3 = nextInt()

        if (a1 == -1) continue;
        if (a2 != -1 && a1 > a2) continue;
        if (a2 == -1 && a3 != -1) continue;
        if (a3 != -1 && a2 > a3) continue;
        c++
    }
    print(c)
}