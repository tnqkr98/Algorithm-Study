import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = nextLine()
    if(s.contains("D2") || s.contains("d2")) print("D2")
    else print("unrated")
}