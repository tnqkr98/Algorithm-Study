import java.util.*

fun main(arg: Array<String>) = with(Scanner(System.`in`)) {
    var s = nextLine()
    if(s == s.reversed()) print("1")
    else print("0")
}