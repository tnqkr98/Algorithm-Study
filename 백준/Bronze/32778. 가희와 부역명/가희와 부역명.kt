import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = nextLine()
    s.forEachIndexed { i, c ->
        if (c == '(' && s[i - 1] == ' ') println()
        else if (c == ' ' && s[i + 1] == '(') print("")
        else if (c != ')') print(c)
    }
    if (!s.contains('(')) {
        println()
        print("-")
    }
}