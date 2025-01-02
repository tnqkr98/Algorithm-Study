import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val costPerSquareMeter = scanner.nextDouble()
    val numberOfLawns = scanner.nextInt()
    var totalCost = 0.0

    repeat(numberOfLawns) {
        val width = scanner.nextDouble()
        val length = scanner.nextDouble()
        totalCost += width * length * costPerSquareMeter
    }

    println("%.7f".format(totalCost))
}