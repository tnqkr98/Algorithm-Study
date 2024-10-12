import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var c = 0
    for(i in 0 until n) {
        val s = next()
        if(s == "he" || s == "him" || s == "she" || s == "her") c++
    }
    print(c)
}