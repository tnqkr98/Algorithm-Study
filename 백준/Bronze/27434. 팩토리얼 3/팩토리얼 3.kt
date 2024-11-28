import java.math.BigInteger
import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextLong()
    print(fact(1, n))
}

fun fact(a: Long, n: Long): BigInteger {
    var num = BigInteger.valueOf(a)
    if (a < n) {
        val b = (a + n) / 2
        num = fact(a, b) * fact(b + 1, n)
    }
    return num
}