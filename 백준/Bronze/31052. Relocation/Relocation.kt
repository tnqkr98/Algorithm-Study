import java.util.*

fun main() {
    val reader = System.`in`.bufferedReader()
    val (n, q) = reader.readLine().split(" ").map { it.toInt() }
    val locations = reader.readLine().split(" ").map { it.toInt() }.toMutableList()
    val output = StringBuilder()

    repeat(q) {
        val query = reader.readLine().split(" ").map { it.toInt() }
        if (query[0] == 1) {
            locations[query[1] - 1] = query[2]
        } else {
            output.appendLine(kotlin.math.abs(locations[query[1] - 1] - locations[query[2] - 1]))
        }
    }
    print(output)
}