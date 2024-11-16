import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var c = 0L
    var s = 0L
    for(i in 1 .. n) {
        c += i
        s += c
    }
    print(s)
}
