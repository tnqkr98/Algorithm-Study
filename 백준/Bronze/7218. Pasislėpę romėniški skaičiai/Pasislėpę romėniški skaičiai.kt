import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = mutableMapOf(
        Pair("I",1),
        Pair("II",2),
        Pair("III",3),
        Pair("IV",4),
        Pair("V",5),
        Pair("VI",6),
        Pair("VII",7),
        Pair("VIII",8),
        Pair("IX",9),
        Pair("X",10),
        Pair("XI",11),
        Pair("XII",12),
    )
    val s = next()
    m.forEach {
        if(s.contains(it.key))print("${it.value} ")
    }
}