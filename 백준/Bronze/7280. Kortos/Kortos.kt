import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = mutableMapOf<Char, Int>()
    s['B'] = 0
    s['K'] = 0
    s['S'] = 0
    s['V'] = 0
    val num = Array(14) { 0 }
    for (i in 0 until 51) {
        val c = next()[0]
        val n = nextInt()
        num[n]++
        s[c] = s[c]!! + 1
    }

    s.forEach {
        if (it.value == 12) print(it.key)
    }
    print(' ')
    num.forEachIndexed { idx, it ->
        if (it == 3) {
            print(idx)
        }
    }
}