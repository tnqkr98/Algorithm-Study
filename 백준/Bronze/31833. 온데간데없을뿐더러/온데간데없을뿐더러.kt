import java.math.BigInteger
import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var a = ""
    for (i in 0 until n) {
        val t = nextInt()
        a += t.toString()
    }
    val AA = BigInteger(a)

    var b = ""
    for (i in 0 until n) {
        val t = nextInt()
        b += t.toString()
    }
    val BB = BigInteger(b)
    if (AA > BB) print(BB)
    else print(AA)
}