import java.math.RoundingMode
import java.text.DecimalFormat
import java.util.*

fun main() = with(Scanner(System.`in`)) {

    val df = DecimalFormat("#.0000")
    df.roundingMode = RoundingMode.HALF_UP

    val n = nextInt()
    for(i in 0 until n) {
        val b = nextInt().toDouble() // 횟수
        val p = nextDouble() // 초
        val bpm = 60*b/p
        val abpm1 = bpm - (bpm/b)
        val abpm2 = bpm + (bpm/b)
        println("${df.format(abpm1)} ${df.format(bpm)} ${df.format(abpm2)}")
    }
}