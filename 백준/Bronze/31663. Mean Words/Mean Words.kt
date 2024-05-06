import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val lenArr = Array(45) { 0 }
    val sumArr = Array(45) { 0 }
    var max = 0
    for (i in 0 until n) {
        val s = next()
        if (s.length > max) max = s.length
        s.forEachIndexed { index, c ->
            lenArr[index]++
            sumArr[index] += c.code
        }
    }
    for (i in 0 until max) {
        print((sumArr[i] / lenArr[i]).toChar())
    }
}