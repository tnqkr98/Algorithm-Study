import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val (n, s) = scanner.nextLine().split(" ").map { it.toInt() }
    val speedChanges = IntArray(n) { scanner.nextInt() }

    var currentSpeed = 0
    for (i in 0 until n) {
        currentSpeed += speedChanges[i]
        if (i < n - 1 && currentSpeed > s) {
            currentSpeed -= 1
        }
    }
    println(currentSpeed)
}