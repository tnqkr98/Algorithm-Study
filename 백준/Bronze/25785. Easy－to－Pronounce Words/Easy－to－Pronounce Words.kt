import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = next()
    val m = setOf('a', 'e', 'i', 'o', 'u')
    var b = s[0]
    var f = 1
    for(i in 1 until s.length) {
        if(m.contains(s[i]) && m.contains(b)) f = 0
        if(!m.contains(s[i]) && !m.contains(b)) f =0
        b = s[i]
    }
    print(f)
}