fun main() {
    val n = readLine()!!.toInt()
    var wins = 0

    for (i in 1..n) {
        val carPosition = readLine()!!.toInt()
        if (carPosition != 1) {
            wins++
        }
    }
    println(wins)
}