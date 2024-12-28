import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val t = next()
    val y = next()
    var c = 0
    for(i in 0 until n) {
        if(t[i] == 'C' && t[i] == y[i]) c++
    }
    print(c)
}