import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next()

    val arr = Array(26) { 0 }

    s.forEach {
        arr[it - 'a']++
    }
    var max = 0
    var mi = ' '
    arr.forEachIndexed { idx, num ->
        if (num > max) {
            max = num
            mi = 'a'.plus(idx)
        }
    }
    print("$mi $max")
}