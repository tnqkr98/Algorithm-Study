import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    val c = nextInt()
    if(a+b+c <= 21) print(1)
    else print(0)
}