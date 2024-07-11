import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next()
    val arr = Array(4) {0}
    s.forEach {
        when(it) {
            'N' -> arr[0]++
            'S' -> arr[1]++
            'E' -> arr[2]++
            'W' -> arr[3]++
        }
    }
    print(n-arr.max())
}