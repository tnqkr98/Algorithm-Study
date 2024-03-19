import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    if (a + b < 10) print(1)
    else if (a + b in 2..99) print(2)
    else print(3)
}
