import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var x = nextInt()
    val n = nextInt()
    var c = 0
    while(x < n) {
        when(x % 3) {
            0 -> x+=1
            1 -> x*=2
            2 -> x*=3
        }
        c++
    }
    print(c)
}