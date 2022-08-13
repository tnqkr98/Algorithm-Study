import java.util.*

fun main(arg: Array<String>) = with(Scanner(System.`in`)) {
    val n = nextInt()
    for(i in 0 .. n) {
        val s = nextLine()
        if(s.isNotEmpty())
            println(s[0].uppercaseChar()+s.substring(1))
    }
}