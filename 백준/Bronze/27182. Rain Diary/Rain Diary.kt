import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = nextInt()

    val nn = n - 7
    val nm = m + 7
    if(nn <=0) print(nm)
    else print(nn)
}