import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = nextInt()
    val k = nextInt()
    val a = nextInt()
    val b = nextInt()
    val c = nextInt()
    val s = arrayOf("Joffrey", "Robb", "Stannis").sorted()
    val map = mapOf(
        "Joffrey" to n * a,
        "Robb" to m * b,
        "Stannis" to k * c
    )
    val max = arrayOf(n * a, m * b, k * c).max()
    s.forEach {
        if (map[it] == max) print("$it ")
    }
}