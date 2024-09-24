import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    val d = nextInt()
    if(a*b%12 == 0) {
        print((a*b/12)*d)
    } else {
        print((a*b/12)*d + d)
    }
}