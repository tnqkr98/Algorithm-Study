import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var b = nextInt()
    var c =0
    for(i in 0 until n-1) {
        val t = nextInt()
        if(t>b) c++
        b = t
    }
    print(c)
}
