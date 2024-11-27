import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val arr = Array(n) { 0 }
    for (i in 2..n) {
        val a = nextInt()
        arr[1 + a] = i
    }
    arr[0] = 1
    arr.forEach {
        print("$it ")
    }
}