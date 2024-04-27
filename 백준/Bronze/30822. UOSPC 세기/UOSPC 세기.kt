import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val str = next()

    var u = 0
    var o = 0
    var s = 0
    var p = 0
    var c = 0
    str.forEach {
        when (it) {
            'u' -> u++
            'o' -> o++
            's' -> s++
            'p' -> p++
            'c' -> c++
        }
    }
    print(arrayListOf(u, o, s, p, c).min())
}