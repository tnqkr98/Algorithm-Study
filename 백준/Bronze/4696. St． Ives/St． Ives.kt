import java.math.RoundingMode
import java.text.DecimalFormat
import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val df = DecimalFormat("#.00")
    df.roundingMode = RoundingMode.HALF_UP

    while (true) {
        val a = nextDouble()
        if (a == 0.toDouble()) break

        val res = 1 + a + a * a + a * a * a + a * a * a * a

        println(df.format(res))
    }
}