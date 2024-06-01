import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for(i in 0 until n) {
        val a = nextInt()
        var f = 1
        for(j in 1 .. a){
            f*=j
        }
        println(f%10)
    }
}