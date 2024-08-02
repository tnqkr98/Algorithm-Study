import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var c = 0
    for(a in 1 .. 500) {
        for (b in 1 .. a) {
           if(a*a - b*b == n) c++
        }
    }
    print(c)
}
