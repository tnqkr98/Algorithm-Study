import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val n = nextInt()
    val set :MutableSet<String> = mutableSetOf()
    for(i in 0 until n) {
        val a = next()
        val b = next()
        if(b == "enter") set.add(a)
        else set.remove(a)
    }
    set.sortedDescending().forEach {
        println(it)
    }
}