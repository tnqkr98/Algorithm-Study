import java.util.*

fun fn(a1: Int, a0: Int, n: Int): Int {
    return a1 * n + a0;
}

fun gn(c: Int, n: Int): Int {
    return c * n;
}

fun main() = with(Scanner(System.`in`)) {
    val a1 = nextInt()
    val a0 = nextInt()
    val c = nextInt()
    val n0 = nextInt()

    if (fn(a1, a0, n0) > gn(c, n0)) {
        print(0)
    } else {
        val t1 = gn(c, n0) - fn(a1, a0, n0)
        val t2 = gn(c, n0 + 1) - fn(a1, a0, n0 + 1)
        if(t2 >= t1) {
            print(1)
        } else {
            print(0)
        }
    }
}