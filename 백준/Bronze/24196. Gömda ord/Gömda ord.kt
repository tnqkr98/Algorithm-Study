import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = next()
    var l = s[0]
    var i = 0
    while (true) {
        print(l)
        i += (l - 'A' + 1)
        if (i >= s.length) break
        l = s[i]
    }
}