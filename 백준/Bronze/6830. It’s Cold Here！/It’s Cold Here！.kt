import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var min = 201
    var mc = ""
    while (hasNext()) {
        val c = next()
        val n = nextInt()
        if (n < min) {
            min = n
            mc = c
        }
    }
    print(mc)
}