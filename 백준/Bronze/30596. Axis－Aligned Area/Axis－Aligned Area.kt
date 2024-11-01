import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a1 = nextInt()
    val a2 = nextInt()
    val a3 = nextInt()
    val a4 = nextInt()
    print("${(if (a4 > a3) a3 else a4) * (if (a2 > a1) a1 else a2)}")
}