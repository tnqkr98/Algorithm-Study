import java.math.BigInteger
import java.util.*

fun main() = with(Scanner(System.`in`)) {
    while(true) {
        val s = next()
        val n = BigInteger(s)
        if(n == 0.toBigInteger()) return@with
        if(n%42.toBigInteger() == 0.toBigInteger()) println("PREMIADO")
        else println("TENTE NOVAMENTE")
    }
}
