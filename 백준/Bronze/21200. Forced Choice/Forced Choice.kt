import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val p = scanner.nextInt()
    val s = scanner.nextInt()
    
    var remainingCards = (1..n).toMutableSet()

    repeat(s) {
        val m = scanner.nextInt()
        val chosenCards = (1..m).map { scanner.nextInt() }.toSet()

        if (p in chosenCards) {
            println("KEEP")
            remainingCards = remainingCards.intersect(chosenCards).toMutableSet()
        } else {
            println("REMOVE")
            remainingCards = remainingCards.subtract(chosenCards).toMutableSet()
        }
    }
}