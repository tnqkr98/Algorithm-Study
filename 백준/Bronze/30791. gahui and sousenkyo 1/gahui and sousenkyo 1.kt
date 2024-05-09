import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val arr = Array(5) {
        nextInt()
    }

    var cnt = 0
    for (i in 1..4) {
        if (arr[0] - arr[i] <= 1000) cnt++
    }
    print(cnt)
}
