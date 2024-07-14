import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = next()
    var sum = 0
    s.forEachIndexed { idx, it ->
        var d = if(idx % 2 == 0) it.digitToInt() * 2 else it.digitToInt()
        if (d >= 10) {
            var dd = 0
            d.toString().forEach { it2 ->
                dd += it2.digitToInt()
            }
            d = dd
        }
        sum += d
    }
    if (sum % 10 == 0) print("DA")
    else print("NE")
}