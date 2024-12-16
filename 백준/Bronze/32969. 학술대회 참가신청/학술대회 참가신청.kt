import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = nextLine()
    if (s.contains("social") || s.contains("history") || s.contains("language") || s.contains("literacy")) {
        print("digital humanities")
    } else {
        print("public bigdata")
    }
}