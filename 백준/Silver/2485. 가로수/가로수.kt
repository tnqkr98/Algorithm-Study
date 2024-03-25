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

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val n = nextInt()
    val a = nextInt()
    var b = nextInt()
    var g = b -a

    val arr = arrayListOf<Int>()
    arr.add(g)
    for (i in 2 until n) {
        val p = nextInt()
        val new = p - b
        arr.add(new)
        g = gcd(g, new)
        b = p
    }

    var sum = 0
    arr.forEach {
        sum += (it/g)-1
    }
    print(sum)
}