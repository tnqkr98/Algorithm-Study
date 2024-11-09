import java.util.*

fun gcd(a: Int, b: Int): Int {
    var big = if (a > b) a else b
    var small = if (a > b) b else a
    while (big % small != 0) {
        val tmp = big
        big = small
        small = tmp % small
    }
    return small
}

fun lcm(a: Int, b: Int): Int {
    return (a * b) / gcd(a, b)
}

fun cnt(t: Int, m: Int): Int {
    return if (t % m == 0) {
        t / m - 1
    } else {
        t / m
    }
}

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for (i in 0 until n) {
        val a = nextInt()
        val b = nextInt()
        val c = nextInt()

        val l = lcm(b, c)
        println("$a $b $c")
        println("${cnt(a, b) + cnt(a, c) - cnt(a, l)}")
    }
}
