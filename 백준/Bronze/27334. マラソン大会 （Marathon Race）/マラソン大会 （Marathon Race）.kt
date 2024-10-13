import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val arr = Array(n) {
        nextInt()
    }
    val nrr = arr.sorted()
    val map = mutableMapOf<Int, Int>()
    nrr.forEachIndexed { idx, it ->
        if (!map.contains(it))
            map[it] = idx + 1
    }
    arr.forEach {
        println(map[it])
    }
}