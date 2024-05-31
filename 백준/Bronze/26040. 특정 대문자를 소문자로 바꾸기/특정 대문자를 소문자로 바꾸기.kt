import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var s = nextLine()
    val c = nextLine()

    val dif = 'A' - 'a'
    c.split(" ").forEach {
        s = s.replace(it[0], (it[0].code - dif).toChar())
    }
    print(s)
}
