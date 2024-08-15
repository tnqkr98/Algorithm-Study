import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var s = 0
    val arr = Array(n) {
        nextInt()
    }
    arr.forEach {
        s += it
    }

    arr.forEachIndexed { idx, it ->
        if (it == s - it) {
            print(idx + 1)
            return@with
        }
    }
}