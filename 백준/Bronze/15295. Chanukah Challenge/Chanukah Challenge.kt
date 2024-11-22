import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for(i in 0 until n) {
        val d = nextInt()
        val a = nextInt()
        var s = 0
        for(j in 1 .. a) {
            s += j + 1
        }
        println("$d $s")
    }
}