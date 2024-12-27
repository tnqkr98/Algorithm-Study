import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val k = scanner.nextInt()
    for (dataSetIndex in 1..k) {
        val n = scanner.nextInt()
        val s = scanner.nextInt()
        val d = scanner.nextInt()
        var totalDucats = 0
        for (i in 0 until n) {
            val distance = scanner.nextInt()
            val value = scanner.nextInt()
            if (distance <= s * d) {
                totalDucats += value
            }
        }
        println("Data Set $dataSetIndex:")
        println(totalDucats)
        println()
    }
}