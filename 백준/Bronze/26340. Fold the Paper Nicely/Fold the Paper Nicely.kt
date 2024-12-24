import java.util.*

fun main() {
    val input = readLine()!!.toInt()

    repeat(input) {
        val dataSet = readLine()!!.split(" ").map { it.toInt() }
        val (a, b, folds) = dataSet
        
        println("Data set: ${dataSet.joinToString(" ")}")

        var side1 = a
        var side2 = b
        var remainingFolds = folds

        while (remainingFolds > 0 && (side1 > 0 || side2 > 0)) {
            if (side1 >= side2) {
                side1 /= 2
            } else {
                side2 /= 2
            }
            remainingFolds--
        }

        val finalSides = listOf(side1, side2).sortedDescending()
        println("${finalSides[0]} ${finalSides[1]}\n")
    }
}