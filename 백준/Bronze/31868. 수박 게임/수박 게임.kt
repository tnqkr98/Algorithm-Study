import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var k = nextLong()
    for(i in 0 until n-1) {
        k/=2
    }
    print(k)
}