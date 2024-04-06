import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val arr = Array(n) { nextInt() }
    arr.sorted().toSet().forEach {
        println(it)
    }
}