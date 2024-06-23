import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val arr = arrayListOf<Int>()

    for (i in 0 until n) {
        val a = nextInt()
        arr.add(a)
    }

    var s = 0
    arr.sorted().forEachIndexed { idx, it ->
        if (idx != n - 1) {
            s += it
        }
    }

    print(s)
}