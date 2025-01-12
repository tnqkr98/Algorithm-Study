import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val s = next()
    s.forEach {
        if(it == 'J') print('O')
        if(it == 'O') print('I')
        if(it == 'I') print('J')
    }
}