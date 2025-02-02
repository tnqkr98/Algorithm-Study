import java.util.*
import kotlin.math.ceil

fun main() {
    val scanner = Scanner(System.`in`)
    while (true) {
        val (R0, W0, C, R) = List(4) { scanner.nextInt() }
        if (R0 == 0 && W0 == 0 && C == 0 && R == 0) break
        val targetMass = C * W0 - R0
        println(if (targetMass <= 0) 0 else ceil(targetMass / R.toDouble()).toInt())
    }
}