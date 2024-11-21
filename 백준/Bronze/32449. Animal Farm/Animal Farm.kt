import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    var max = 0L
    val notPig = arrayListOf<Long>()
    for (i in 0 until n) {
        val s = next()
        val a = nextLong()
        if (s == "pig" && max < a) {
            max = a
        } else if (s != "pig") {
            notPig.add(a)
        }
    }
    var sum:Long = max
    notPig.forEach {
        if (it < max) sum += it
    }
    print(sum)
}
