import java.math.BigDecimal
import java.math.RoundingMode
import java.util.*
import kotlin.math.sqrt

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt().toBigInteger()
    val b = nextInt().toBigInteger()
    val s = a*a+b*b
    val r = sqrt(s.toDouble())
    val d = BigDecimal(r).setScale(9, RoundingMode.HALF_UP)
    println(d)
}