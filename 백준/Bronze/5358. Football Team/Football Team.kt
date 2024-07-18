import java.util.*

fun main() = with(Scanner(System.`in`)) {
    while (hasNextLine()) {
        val s = nextLine()
        s.forEach {
            if (it == 'i') print('e')
            else if (it == 'I') print('E')
            else if (it == 'e') print('i')
            else if (it == 'E') print('I')
            else print(it)
        }
        println()
    }
}