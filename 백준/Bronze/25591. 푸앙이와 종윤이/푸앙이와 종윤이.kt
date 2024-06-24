import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val x = nextInt()
    val y = nextInt()

    val a = 100 -x
    val b = 100 - y
    val c = 100 - (a+b)
    val d = a*b
    val q = d/100
    val r = d%100

    val r1 = c + q
    println("$a $b $c $d $q $r")
    println("$r1 $r")
}