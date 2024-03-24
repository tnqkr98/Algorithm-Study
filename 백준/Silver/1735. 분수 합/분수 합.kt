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
    val c1 = nextInt()
    val p1 = nextInt()
    val c2 = nextInt()
    val p2 = nextInt()

    val lcm = p1 * p2 / gcd(p1,p2)
    val nc1 = (lcm / p1) * c1
    val nc2 = (lcm / p2) * c2
    val nc = nc1 + nc2
    print("${nc/gcd(nc,lcm)} ${lcm/gcd(nc,lcm)}")
}