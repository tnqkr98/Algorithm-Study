import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val arr = Array(8) {
        Array(8) { 0 }
    }

    val map = mutableMapOf<Int, String>()
    var cnt = 1

    for (i in 1..8) {
        for (j in 0..7) {
            map[cnt++] = "${'a' + j}$i"
        }
    }
    val n = nextInt()
    print(map[n])
}