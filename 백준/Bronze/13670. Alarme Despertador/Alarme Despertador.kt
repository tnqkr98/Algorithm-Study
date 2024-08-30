import java.util.*

fun main() = with(Scanner(System.`in`)) {
    while (true) {
        val h1 = nextInt()
        val m1 = nextInt()
        val h2 = nextInt()
        val m2 = nextInt()

        val mm1 = h1 * 60 + m1
        val mm2 = h2 * 60 + m2
        if (mm1 == 0 && mm2 == 0) break
        if (mm2 >= mm1) println(mm2 - mm1)
        else {
            println(1440 + mm2 - mm1)
        }
    }
}
