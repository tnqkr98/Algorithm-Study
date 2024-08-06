import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = mapOf(
        Pair('A',4),
        Pair('K',3),
        Pair('Q',2),
        Pair('J',1),
        Pair('X',0),
    )
    var sum = 0
    for(i in 0 until n) {
        val s = next()
        s.forEach {
            sum += m[it]!!
        }
    }
    print(sum)
}
