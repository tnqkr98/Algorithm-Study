import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextLine()
    while(hasNextLine()) {
        val a = nextLine()
        println(a.reversed())
    }
}
