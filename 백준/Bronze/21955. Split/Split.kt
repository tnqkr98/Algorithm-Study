import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s = next()
    val a = s.substring(0,s.length/2)
    val b = s.substring(s.length/2)
    print("$a $b")
}