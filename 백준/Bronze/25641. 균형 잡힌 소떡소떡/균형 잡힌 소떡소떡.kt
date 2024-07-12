import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val st = next()
    var s = 0
    var t = 0

    st.forEach {
        if (it == 's') s++
        if (it == 't') t++
    }

    var c = 0

    for (i in st.indices) {
        if (s != t) {
            c++
            if (st[i] == 's') s--
            if (st[i] == 't') t--
        } else {
            break
        }
    }
    print(st.substring(c))
}