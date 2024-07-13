import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val m = nextInt()

    val narr = Array(n) { next() }
    val marr = Array(m) { next() }

    narr.forEach { it1->
        marr.forEach { it2->
            println("$it1 as $it2")
        }
    }
}