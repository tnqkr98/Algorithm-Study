import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val str = nextLine()
    if (str[0].digitToInt() + str[4].digitToInt() == str[8].digitToInt())
        println("YES")
    else
        println("NO")
}