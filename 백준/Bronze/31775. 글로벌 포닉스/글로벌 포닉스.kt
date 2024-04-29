import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s1 = next()
    val s2 = next()
    val s3 = next()

    val arr = arrayListOf(s1[0], s2[0], s3[0])
    var l = 0
    var k = 0
    var p = 0
    arr.forEach {
        when (it) {
            'l' -> l++
            'k' -> k++
            'p' -> p++
        }
    }
    if (l == 1 && k == 1 && p == 1) print("GLOBAL")
    else print("PONIX")
}