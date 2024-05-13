import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val k = nextInt()
    val n = nextInt()
    val arr = Array(n) {
        nextInt()
    }
    val m = nextInt()
    val brr = Array(m) {
        nextInt()
    }

    var c = 0
    arr.forEach { a ->
        brr.forEach { b ->
            if (a + k == b) c++
        }
    }
    print(c)
}