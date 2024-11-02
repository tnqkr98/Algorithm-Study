import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for(i in 0 until n) {
        val s = next()
        s.forEachIndexed { idx, it ->
            var c = it
            if(idx == 0) {
                c = it.lowercaseChar()
            } else {
                if(it.isUpperCase()) {
                    print("_")
                    c = it.lowercaseChar()
                }
            }
            print(c)
        }
        println()
    }
}
