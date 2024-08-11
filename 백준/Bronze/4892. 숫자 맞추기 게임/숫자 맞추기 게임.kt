import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var i = 1
    while (true) {
        val n0 = nextInt()
        if(n0 == 0) break
        val n1 = 3 * n0
        var n2 = 0
        n2 = if (n1 % 2 == 0) n1 / 2
        else (n1 + 1) / 2
        val n3 = 3 * n2
        val n4 =n3/9
        val s = if(n1 %2 == 0) "even" else "odd"
        println("${i++}. $s $n4")
    }
}