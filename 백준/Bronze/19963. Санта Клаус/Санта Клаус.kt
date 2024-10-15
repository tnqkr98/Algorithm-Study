import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val b1 = nextInt()
    val b2 = nextInt()
    val set = mutableSetOf<Int>()
    for(i in 1 .. n) {
        set.add(i)
    }
    for(i in 0 until b1) {
        val t = nextInt()
        set.remove(t)
    }
    for(i in 0 until b2) {
        val t = nextInt()
        set.remove(t)
    }
    println(set.size)
    set.forEach {
        print("$it ")
    }
}