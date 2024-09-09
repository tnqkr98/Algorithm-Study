import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for(i in 0 until n) {
        val s = next()
        var a = 0
        var b = 0
        s.forEach {
            if(it == 'a') a++
            if(it == 'b') b++
        }
        println("${if(a<b)a else b}")
    }
}
