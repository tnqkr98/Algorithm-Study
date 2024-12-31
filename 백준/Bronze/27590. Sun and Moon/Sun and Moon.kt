import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val (d_s, y_s) = scanner.nextLine().split(" ").map { it.toInt() }
    val (d_m, y_m) = scanner.nextLine().split(" ").map { it.toInt() }
    
    var year = 1
    while ((year + d_s) % y_s != 0 || (year + d_m) % y_m != 0) {
        year++
    }
    println(year)
}