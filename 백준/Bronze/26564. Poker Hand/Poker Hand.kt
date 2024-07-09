import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var arr = Array(14) { 0 }
    for (i in 0 until n) {
        for (j in 0 until 5) {
            val a = next()
            when(a[0]) {
                'A' -> arr[1]++
                'T' -> arr[10]++
                'J' -> arr[11]++
                'Q' -> arr[12]++
                'K' -> arr[13]++
                else -> arr[a[0].digitToInt()]++
            }
        }
        println(arr.max())
        arr = Array(14) { 0 }
    }
}