import java.math.RoundingMode
import java.text.DecimalFormat
import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val x = nextDouble()
    val y = nextDouble()

    val t = x / y
    val kim = mutableListOf(t)
    val n = nextInt()
    for (i in 0 until n) {
        val a = nextDouble()
        val b = nextDouble()
        kim.add(a / b)
    }
    val df = DecimalFormat("#.00")
    df.roundingMode = RoundingMode.HALF_UP
    print(df.format(kim.min() * 1000))
}