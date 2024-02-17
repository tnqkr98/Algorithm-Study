import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    val c = nextInt()

    println(a+b-c)
    println((a.toString() + b.toString()).toInt() -c)
}