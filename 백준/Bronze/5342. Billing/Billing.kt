import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val map = mapOf(
        "Paper" to 57.99,
        "Printer" to 120.50,
        "Planners" to 31.25,
        "Binders" to 22.50,
        "Calendar" to 10.95,
        "Notebooks" to 11.20,
        "Ink" to 66.95,
    )

    var sum = 0.0
    while (true) {
        val s = next()
        if (s != "EOI") sum += map[s]!!
        else break
    }
    print("$${sum}")
}
