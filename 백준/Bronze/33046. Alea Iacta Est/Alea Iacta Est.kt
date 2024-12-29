import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a1 = nextInt()
    val a2 = nextInt()
    val b1 = nextInt()
    val b2 = nextInt()

    val a = a1 + a2
    var ra = (1 + a - 1) % 4
    if(ra == 0) ra = 4
    var rb = (ra + b1 + b2 -1) % 4
    if(rb == 0) rb = 4
    print(rb)
}