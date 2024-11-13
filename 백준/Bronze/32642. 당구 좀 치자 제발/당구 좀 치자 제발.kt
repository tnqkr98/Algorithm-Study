import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var c = 0L
    var s = 0L

    for(i in 0 until n) {
        val a = nextInt()
        if(a == 1) c++
        else c--
        s += c
    }
    print(s)
}