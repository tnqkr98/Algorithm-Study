import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val s = nextLine()
    for(i in s.indices) {
        if(i == 0) print(s[i])
        else if(s[i] != s[i-1]) {
            print(s[i])
        }
    }
}