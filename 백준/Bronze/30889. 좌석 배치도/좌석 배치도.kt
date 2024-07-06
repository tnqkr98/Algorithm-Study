import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val arr = Array(10) { Array(20) { '.' } }
    for (i in 0 until n) {
        val d = next()
        if (d.length == 2) {
            arr[d[0] - 'A'][d[1].digitToInt() - 1] = 'o'
        } else {
            arr[d[0] - 'A'][d.substring(1..2).toInt() - 1] = 'o'
        }
    }

    arr.forEach {
        it.forEach { d ->
            print(d)
        }
        println()
    }
}