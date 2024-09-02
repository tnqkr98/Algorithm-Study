import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var m = nextInt()
    var max = m
    for(i in 0 until n) {
        val a = nextInt()
        val b = nextInt()
        m+=a-b
        if(m > max) max = m
        else if(m < 0) {
            max = 0
            break
        }
    }
    print(max)
}
