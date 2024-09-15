import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val m = nextInt()
    val a = nextInt()
    val b = nextInt()

    if(a <= b) print(b-a)
    else print(b+m -a)
}