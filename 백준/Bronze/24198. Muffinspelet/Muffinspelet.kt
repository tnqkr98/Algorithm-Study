import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var a = 0
    var b = 0
    var at = false
    var n = nextInt()
    var d: Int
    var r: Int

    do {
        d = n / 2
        r = n - d
        if (at) a += r
        else b += r
        n -= r
        at = !at
    } while (d != 0 && r != 0)
    print("$a $b")
}