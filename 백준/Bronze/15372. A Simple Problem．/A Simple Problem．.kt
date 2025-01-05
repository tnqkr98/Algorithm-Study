import java.io.BufferedReader
import java.io.InputStreamReader

fun main() {
    val reader = BufferedReader(InputStreamReader(System.`in`))
    val t = reader.readLine().toInt()
    val results = StringBuilder()

    repeat(t) {
        val n = reader.readLine().toLong()
        results.append(n * n).append("\n")
    }
    print(results)
}