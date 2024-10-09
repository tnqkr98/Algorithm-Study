import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next()
    s.forEach {
        if (it == 'I') print('i')
        if (it == 'l') print('L')
    }
}