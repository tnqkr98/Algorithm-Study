import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val map = mapOf(
        Pair(0, "0000\n0  0\n0  0\n0  0\n0000"),
        Pair(1, "   1\n   1\n   1\n   1\n   1"),
        Pair(2, "2222\n   2\n2222\n2\n2222"),
        Pair(3, "3333\n   3\n3333\n   3\n3333"),
        Pair(4, "4  4\n4  4\n4444\n   4\n   4"),
        Pair(5, "5555\n5\n5555\n   5\n5555"),
        Pair(6, "6666\n6\n6666\n6  6\n6666"),
        Pair(7, "7777\n   7\n   7\n   7\n   7"),
        Pair(8, "8888\n8  8\n8888\n8  8\n8888"),
        Pair(9, "9999\n9  9\n9999\n   9\n   9"),
    )
    val s = next()
    s.forEachIndexed { index, it ->
        print(map[it.digitToInt()])
        if (index != s.length - 1) {
            println('\n')
        }
    }
}