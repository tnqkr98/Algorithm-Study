import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = nextInt()
    var c = 0
    for(i in 0 until n) {
        var ac = 0
        for(j in 0 until m) {
            val s = next()
            if(s == "A") ac++
        }
        if(ac == 1) c++
    }
    if(n == c) print("Yes")
    else print("No")
}