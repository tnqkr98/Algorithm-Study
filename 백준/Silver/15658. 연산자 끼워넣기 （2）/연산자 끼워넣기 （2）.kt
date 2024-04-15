import java.util.*

var n: Int = 0
lateinit var narr: Array<Int>
lateinit var carr: Array<Int>
var min = 1000000000
var max = -1000000000

fun calc(idx: Int, res: Int, plus: Int, minus: Int, mul: Int, div: Int) {
    if (idx == n - 1) {
        if (res > max) max = res
        if (res < min) min = res
        return
    }

    if (plus > 0) {
        calc(idx + 1, res + narr[idx + 1], plus - 1, minus, mul, div)
    }
    if (minus > 0) {
        calc(idx + 1, res - narr[idx + 1], plus, minus - 1, mul, div)
    }
    if (mul > 0) {
        calc(idx + 1, res * narr[idx + 1], plus, minus, mul - 1, div)
    }
    if (div > 0) {
        calc(idx + 1, res / narr[idx + 1], plus, minus, mul, div - 1)
    }
}


fun main() = with(Scanner(System.`in`)) {
    n = nextInt()
    narr = Array(n) {
        nextInt()
    }

    carr = Array(4) {
        nextInt()
    }

    calc(0, narr[0], carr[0], carr[1], carr[2], carr[3])
    println(max)
    println(min)
}