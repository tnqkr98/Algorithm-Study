import java.util.*
import kotlin.math.pow

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val num = next()
    val b = nextDouble()

    val map = mutableMapOf<Char, Int>()
    val init = 'A'
    for (i in 0..9) {
        map['0' + i] = i
    }
    for (i in 10..35) {
        map[init + i - 10] = i
    }

    var sum = 0
    for(i in num.indices) {
        val n = map[num[i]] ?: continue

        sum += n.times(b.pow((num.length - i - 1).toDouble())).toInt()
    }

    println(sum)
}