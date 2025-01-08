import java.io.BufferedReader
import java.io.InputStreamReader

fun main() {
    val reader = BufferedReader(InputStreamReader(System.`in`))
    val n = reader.readLine().toInt()
    val gifts = IntArray(n)
    repeat(n) { gifts[it] = reader.readLine().toInt() }
    val result = IntArray(n)
    for (guest in 1..n) {
        result[gifts[guest - 1] - 1] = guest
    }
    result.forEach { println(it) }
}