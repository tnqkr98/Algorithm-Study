import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s1 = next()
    val s2 = next()

    val n1 = s1.toIntOrNull()
    val n2 = s2.toIntOrNull()

    if(n1 == null || n2 == null) {
        print("NaN")
    } else {
        print(n1-n2)
    }
}