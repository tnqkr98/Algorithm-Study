import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val arr = Array(n) {
        nextInt()
    }
    arr.sort()
    print("${arr[0] + arr[1]}")
}
