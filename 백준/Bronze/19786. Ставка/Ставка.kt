import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    val results = mutableListOf<String>()
    
    repeat(t) {
        val A = scanner.nextInt()
        val C = scanner.nextInt()
        val r = scanner.nextInt()
        val g = scanner.nextInt()
        val b = scanner.nextInt()
        
        val redScore = A * ((r + 1) * (r + 1) + g * g + b * b) + C * minOf(r + 1, g, b)
        val greenScore = A * (r * r + (g + 1) * (g + 1) + b * b) + C * minOf(r, g + 1, b)
        val blueScore = A * (r * r + g * g + (b + 1) * (b + 1)) + C * minOf(r, g, b + 1)
        
        results.add(
            when (maxOf(redScore, greenScore, blueScore)) {
                redScore -> "RED"
                greenScore -> "GREEN"
                else -> "BLUE"
            }
        )
    }
    
    println(results.joinToString("\n"))
}
